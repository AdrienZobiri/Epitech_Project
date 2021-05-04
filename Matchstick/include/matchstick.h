/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** matchstick
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ioctl.h>

#define ERR_NBR "Error: invalid input (positive number expected)\n"
#define ERR_MAX_RM "Error: you cannot remove more than %d matches per turn\n"
#define ERR_MIN_0 "Error: you have to remove at least one match\n"
#define ERR_NO_ENOUGH "Error: not enough matches on this line\n"
#define ERR_OUT_RANGE "Error: this line is out of range\n"

typedef struct matchstick matchstick_t;

struct matchstick
{
    int argc;
    char **argv;
    char **map;
    int line;
    int matches;
    char *bufferl;
    char *bufferm;
    int *sticks;
};

int error_handling(matchstick_t *p);
void create_map(matchstick_t *p);
int reader(matchstick_t *p, int s);
bool end_game(matchstick_t *p);
void remove_stick(matchstick_t *p);
int err_line(matchstick_t *p, int first);
int err_matches(matchstick_t *p, int max, int first);
int end_statut(int player);
int redirect(matchstick_t *p);
void helper(void);
int playerzeor(matchstick_t *p, int max);
void playerone(matchstick_t *p);

/*
problème quand la ligne ne contien deja plus de stick
ou qu'elle n'en contient pas asser

l'IA ne joue pas encore !!!
*/