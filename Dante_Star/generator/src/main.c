/*
** EPITECH PROJECT, 2021
** dante
** File description:
** main
*/

#include "../include/dante.h"

void helper(void)
{
    printf("generate a maze map :\n\n");
    printf("./generateur [width > 1] [height > 1] [perfect|imperfect]\n");
    exit(0);
}

int main(int argc, char **argv)
{
    dante_t p = {0};
    p.argc = argc;
    p.argv = argv;
    if (argc == 2)
        if (strcmp(argv[1], "-h") == 0)
            helper();
    redirect(&p);
    return (0);
}
