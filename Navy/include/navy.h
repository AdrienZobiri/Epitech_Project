/*
** EPITECH PROJECT, 2020
** push_swap
** File description:
** references
*/

#ifndef NAVY_H_
#define NAVY_H_

#include "my.h"
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>

// struct
struct navy
{
    char **temp;
    char *buffer;
    char **boat;
    char **boat2;
    char **attacks;
    char **attacks2;
    char *filepath;
    char *filepath2;
    char *shoot;
    int shoot_x;
    int shoot_y;
    int scorep1;
    int scorep2;
    int statut;
    int player;
    int terminal;
    bool hit;
};

typedef struct DATA DATA;

struct DATA {
    int flip;
    int pid;
    int tmp;
    int num[2];
    int state;
    int player;
};

extern DATA data2;

// Preparation
void init_connection(struct navy *p, int argc, char **argv);
int file_path_1(struct navy *p);
int file_path_2(struct navy *p);
void what_player(struct navy *p, int argc);
void generate_maps(struct navy *p);
int generate_position(struct navy *p);

// generate maps
void read_void_maps(struct navy *p);
int test_format_map(char *pos);
int size_maps(char *map_select);

// processing
void printmaps(struct navy *p, int argc);
void selection_attack(struct navy *p);
void wait_attack(struct navy *p);
void action_post_attack(struct navy *p);
void check_statut(struct navy *p);

// signal
void receive_signal(struct navy *p);
void variation_signal(struct navy *p);
void send_signal(struct navy *p);

#endif /* PUSH_SWAP_H_ */

// // Bad boat length
// // Crashed - Timed out after 5s