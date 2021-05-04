/*
** EPITECH PROJECT, 2020
** B-PSU-101-MPL-1-1-navy-adrien.zobiri
** File description:
** init_connection.c
*/

#include "navy.h"

// DATA data2;

void connection_handle(int sig, siginfo_t *info)
{
    data2.flip = 1;
    data2.pid = info->si_pid;
}

void init_connection(struct navy *p, int argc, char **argv)
{
    struct sigaction sa;

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = connection_handle;
    if (argc == 2) {
        data2.player = 1;
        my_printf("my pid: %d\n", getpid());
        my_printf("waiting for enemy connection...\n");
        while (data2.flip == 0)
            sigaction(SIGUSR1, &sa, NULL);
        my_printf("\nenemy connected\n\n");
        data2.state = 0;
    } else if (argc == 3) {
        data2.player = 2;
        data2.pid = my_getnbr(argv[1]);
        my_printf("my pid: %d\n", getpid());
        kill(data2.pid, SIGUSR1);
        my_printf("successfully connected\n\n");
        data2.state = 1;
    } else
        my_printf("Bad parameters !\n");
}