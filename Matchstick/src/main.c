/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** main
*/

#include "matchstick.h"

int main(int argc, char **argv)
{
    int output = 0;
    matchstick_t p = {0};

    p.argc = argc;
    p.argv = argv;
    if (argc != 3) {
        if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
            helper();
            return (0);
        } else
            return (84);
    }
    output = redirect(&p);
        return (output);
    return (0);
}
