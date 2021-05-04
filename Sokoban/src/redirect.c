/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** main and redirect
*/

#include "sokoban.h"

int test_size_window(sokoban *p)
{
    if (p->size_x > COLS || p->size_y > LINES) {
        mvprintw(LINES/2, COLS/2 - 9, "Expand the terminal");
        return (1);
    }
    return (0);
}

void get_key(sokoban *p)
{
    p->key = getch();
    if (p->key == -1) {
        endwin();
        exit(84);
    }
}

void printer_map(sokoban *p)
{
    for (int y = 0; p->map[y]; y++)
        mvprintw(y + ((LINES / 2) - (p->size_y / 2)),\
        (COLS / 2) - (p->size_x / 2), "%s\n", p->map[y]);
    refresh();
}

void redirect(sokoban *p)
{
    read_map(p);
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    refresh();
    while (end_statut(p) == false) {
        clear();
        if (test_size_window(p) == 0) {
            printer_map(p);
            get_key(p);
            if (restarter(p) == 0)
                move_player(p, test_command(p));
        }
        refresh();
    }
    printer_map(p);
    destroy(p);
}