/*
** EPITECH PROJECT, 2020
** B-PSU-101-MPL-1-1-navy-adrien.zobiri
** File description:
** init_connection.c
*/

#include "navy.h"

DATA data2;

void receive_handle(int sig)
{
    data2.flip = 1;
}

void read_in_file(struct navy *p)
{
    int r;
    int fd = -1;
    int size;

    fd = open("src/attack_to", O_RDONLY);
    size = size_maps("src/attack_to");
    p->shoot = malloc(sizeof(char) * (size + 1));
    read(fd, p->shoot, size);
    p->shoot[size] = '\0';
}

void receive_signal(struct navy *p)
{
    int sig_arr[2] = {SIGUSR1, SIGUSR2};
    static int flip = 0;
    static int b = 0;

    data2.flip = 0;
    while (data2.flip == 0) {
        signal(SIGUSR1, receive_handle);
    }
    usleep(500);
    data2.num[b] = data2.tmp;
    b++;
    flip++;
    read_in_file(p);
}

void print_in_file(struct navy *p)
{
    int r;
    int fd;
    int size;

    fd = open("src/attack_to", O_WRONLY);
    write(fd, p->shoot, my_strlen(p->shoot));
}

void send_signal(struct navy *p)
{
    kill(data2.pid, SIGUSR1);
    print_in_file(p);
}