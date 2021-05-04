/*
** EPITECH PROJECT, 2020
** bistromatic
** File description:
** lib for bistromatic
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

#define EXIT_USAGE    84
#define EXIT_BASE     84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC   84
#define EXIT_READ     84
#define EXIT_OPS      84
#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"

#define READ_FAILED "read failed\n"
#define NOTHING_TO_READ "read has nothing more to read\n"
#define BUFFER_NO_COMPLETE "read didn’t complete the entire buffer\n"
#define READ_COMPLETED "read completed the entire buffer\n"

// struct
struct bsq
{
    char **temp;
    char *buffer;
    char *file;
    char *finalstring;
    int start_l;
    int start_c;
    int square;
    int max_l;
    int max_c;
    int max_square;
    int no_empty;
    int size;
    int fd;
    int c;
    int w;
    int x;
    int y;
    int z;
};

// opening
void build_double_board(struct bsq *p);
int fs_understand_return_of_read(struct bsq *p);
int fs_open_file(struct bsq *p);
void get_lens(struct bsq *p);

// find_biggest_area
int test_o(struct bsq *p, int a, int b);
int back_zero(struct bsq *p, int a, int b);
int size_test(struct bsq *p, int a);
int test_par_ligne(struct bsq *p);
void counter(struct bsq *p);

// bsq
void testfile(struct bsq *p);
void remplacer_cross(struct bsq *p);
int test_par_ligne(struct bsq *p);
int redirect(struct bsq *p);
int main(int argc, char const *argv[]);


#endif /* !bsq.h */