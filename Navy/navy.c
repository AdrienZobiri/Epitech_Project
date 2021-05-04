/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main for project navy
*/

#include "navy.h"

void check_machin(struct navy *p)
{
    if (p->statut == 2 && p->terminal == 2)
        my_printf("Enemy won\n");
    else if (p->statut == 2 && p->terminal == 3)
        my_printf("I won\n");
}

void processing(struct navy *p, char **argv, int argc)
{
    printmaps(p, argc);
    if (p->player == 1)
        selection_attack(p);
    else if (p->player == 2)
        wait_attack(p);
    action_post_attack(p);
    check_statut(p);
    if (p->player == 1)
        p->player = 2;
    else if (p->player == 2)
        p->player = 1;
}

int preparation(struct navy *p, int argc, char ** argv)
{
    int r = 0;
    init_connection(p, argc, argv);
    if (argc == 2)
        r = file_path_1(p);
    else if (argc == 3)
        r = file_path_2(p);
    if (r == 84)
        return (84);
    what_player(p, argc);
    generate_maps(p);
    if (generate_position(p) == 84)
        return (84);
}

int test_file_path(struct navy *p, char **argv, int argc)
{
    p->filepath = argv[argc - 1];
    if (open(p->filepath, O_RDWR) == -1)
        return (84);
    if (argc == 2) {
        char *pid = my_convnbr(getpid(), pid);
        int fd = open("src/vaseline", O_WRONLY);
        write(fd, pid, my_strlen(pid));
    }
    else {
        char *buff = malloc(sizeof(char) * size_maps("src/vaseline"));
        int fd = open("src/vaseline", O_RDONLY);
        read(fd, buff, size_maps("src/vaseline"));
        if (my_strcmp(buff, argv[1]) != 2)
            return (84);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (84);
    struct navy p = {0};
    if (test_file_path(&p, argv, argc) == 84)
        return (84);
    p.statut = 0;
    p.terminal = argc;
    if (preparation(&p, argc, argv) == 84)
        return (84);
    while (p.statut == 0)
        processing(&p, argv, argc);
    if (p.statut == 1 && p.terminal == 2)
        my_printf("I won\n");
    else if (p.statut == 1 && p.terminal == 3)
        my_printf("Enemy won\n");
    check_machin(&p);
    return (84);
}