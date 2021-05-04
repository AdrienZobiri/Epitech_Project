/*
** EPITECH PROJECT, 2021
** dante
** File description:
** error_handling
*/

#include "../include/dante.h"

void error_handling(dante_t *p)
{
    if (p->argc != 2)
        error(84, 0, "expected filepath for the maze\n");
}