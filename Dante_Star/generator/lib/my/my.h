/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** libmy.a 3.5
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <fcntl.h>
#include <errno.h>
#include <error.h>

////////////////////////////////////////////////
///
/// @brief Print un char
/// @param c char de la lettre a print
/// @return void
///
////////////////////////////////////////////////
void my_putchar(char c);

////////////////////////////////////////////////
///
/// @brief test de positivitée
/// @param nb int de la valeur a test
/// @return return int 0 negative et 1 positive
///
////////////////////////////////////////////////
int my_isneg(int nb);

////////////////////////////////////////////////
///
/// @brief Imprime le nombre donner
/// @param nb int Nombre a imprimer
/// @return void
///
////////////////////////////////////////////////
void my_put_nbr(int nb);

////////////////////////////////////////////////
///
/// @brief print chaine de char
/// @param str char *const
/// @return void
///
////////////////////////////////////////////////
void my_putstr(char const *str);

////////////////////////////////////////////////
///
/// @brief compte la chaine exclu \0
/// @param str char *
/// @return int
///
////////////////////////////////////////////////
int my_strlen(char *str);

////////////////////////////////////////////////
///
/// @brief transforme "45" = 45
/// @param str char *const nombre en string
/// @return int
///
////////////////////////////////////////////////
int my_getnbr(char const *str);

////////////////////////////////////////////////
///
/// @brief ---
/// @param teb int *
/// @param size int
/// @return return char* avec \0
///
////////////////////////////////////////////////
void my_sort_int_array(int *tab, int size);

////////////////////////////////////////////////
///
/// @brief met un nombre a la puissance
/// @param nb int nombre base
/// @param power int puissance
/// @return return int
///
////////////////////////////////////////////////
int my_compute_power_rec(int nb, int power);

////////////////////////////////////////////////
///
/// @brief calcul la racine carré d'un nombre
/// @param nb nombre a calculer
/// @return return int
///
////////////////////////////////////////////////
int my_compute_square_root(int nb);

////////////////////////////////////////////////
///
/// @brief test si le nombre est premier
/// @param nb nombre a test
/// @return return int 0=prime
///
////////////////////////////////////////////////
int my_is_prime(int nb);

////////////////////////////////////////////////
///
/// @brief trouve le nombre premier supperieur
/// @param nb int la valeur
/// @return return int
///
////////////////////////////////////////////////
int my_find_prime_sup(int nb);

////////////////////////////////////////////////
///
/// @brief copy une string a la suite d'une autre
/// @param dest char * string retournée
/// @param src char *const string a copy
/// @return return char* avec \0
///
////////////////////////////////////////////////
char *my_strcpy(char *dest, char const *src);

////////////////////////////////////////////////
///
/// @brief copy n char
/// @param dest char * string retournée
/// @param src char *const string a copy
/// @param n int nombre a copy
/// @return return char* avec \0
///
////////////////////////////////////////////////
char *my_strncpy(char *dest, char const *src, int n);

////////////////////////////////////////////////
///
/// @brief rerese la string
/// @param str char * la string a reverse
/// @return return char* avec \0
///
////////////////////////////////////////////////
char *my_revstr(char *str);

////////////////////////////////////////////////
///
/// @brief ---
/// @param str char *
/// @param to_find char *const
/// @return return char*
///
////////////////////////////////////////////////
char *my_strstr(char *str, char const *to_find);

////////////////////////////////////////////////
///
/// @brief compare s1 et s2
/// @param s1 char *
/// @param s2 char *
/// @return return int
///
////////////////////////////////////////////////
int my_strcmp(char *s1, char *s2);

////////////////////////////////////////////////
///
/// @brief compare n char entre s1 et s2
/// @param s1 char *const
/// @param s2 char *const
/// @return return int
///
////////////////////////////////////////////////
int my_strncmp(char const *s1, char const *s2, int n);

////////////////////////////////////////////////
///
/// @brief met toute la string en MAJ
/// @param str char * string a convertir
/// @return return char *
///
////////////////////////////////////////////////
char *my_strupcase(char *str);

////////////////////////////////////////////////
///
/// @brief met toute la string en Min
/// @param str char * string a convertir
/// @return return char *
///
////////////////////////////////////////////////
char *my_strlowcase(char *str);

////////////////////////////////////////////////
///
/// @brief ---
/// @param str char *
/// @return return char *
///
////////////////////////////////////////////////
char *my_strcapitalize(char *str);

////////////////////////////////////////////////
///
/// @brief Noy fix test si le char est Num
/// @param str char *const string a annalyser
/// @return return int 0==Num
///
////////////////////////////////////////////////
int my_char_isnum(char n);

////////////////////////////////////////////////
///
/// @brief test si la string est Alpha
/// @param str char *const string a annalyser
/// @return return int 0==Alpha
///
////////////////////////////////////////////////
int my_str_isalpha(char const *str);

////////////////////////////////////////////////
///
/// @brief test si la string est Num ou signe "+-"
/// @param str char *const string a annalyser
/// @return return int 0==Num
///
////////////////////////////////////////////////
int my_str_isnum(char const *str);

////////////////////////////////////////////////
///
/// @brief test si la string est en Min
/// @param str char *const string a annalyser
/// @return return int 0==Min
///
////////////////////////////////////////////////
int my_str_islower(char const *str);

////////////////////////////////////////////////
///
/// @brief test si la string est en MAJ
/// @param str char *const string a annalyser
/// @return return int 0==MAJ
///
////////////////////////////////////////////////
int my_str_isupper(char const *str);

////////////////////////////////////////////////
///
/// @brief check si le char est imprimable
/// @param str char *const
/// @return return int
///
////////////////////////////////////////////////
int my_str_isprintable(char const *str);

////////////////////////////////////////////////
///
/// @brief not fix
/// @param str char *const
/// @return void
///
////////////////////////////////////////////////
void my_showstr(char const *str);

////////////////////////////////////////////////
///
/// @brief not fix
/// @param c char
/// @param sto char *
/// @return return char*
///
////////////////////////////////////////////////
char *my_dectohex(char c, char *sto);

////////////////////////////////////////////////
///
/// @brief cat all char in string
/// @param dest char * destiantion
/// @param src char *const source de string
/// @return return char*
///
////////////////////////////////////////////////
char *my_strcat(char *dest, char *src);

////////////////////////////////////////////////
///
/// @brief Complete la string avec char
/// @param str str de la chaine a combler
/// @param size int du nombre de char a mettre
/// @param c char choisis pour combler
/// @return return char* avec \0
///
////////////////////////////////////////////////
void my_memset(char *str, int size, char c);

////////////////////////////////////////////////
///
/// @brief
/// @param src char *
/// @return return char*
///
////////////////////////////////////////////////
char *my_strdup(char *src);

////////////////////////////////////////////////
///
/// @brief convertie dans une autre base
/// @param origine int de la valeure prise en entrée
/// @param base int de la base choisie (pour la conversion standard)
/// @return return char* avec \0
///
////////////////////////////////////////////////
char *my_switch_to_base(unsigned int origine, int base);

////////////////////////////////////////////////
///
/// @brief convertie int en char
/// @param nbr int positiv or negativ
/// @param str string whitout malloc
/// @return return char* avec \0
///
////////////////////////////////////////////////
char *my_convnbr(int nbr, char *str);

////////////////////////////////////////////////
///
/// @brief Imprime tout
/// @param string %d %i %s %c
/// @param variable separé par des virgules
/// @return string composée
///
////////////////////////////////////////////////
int my_printf(char const *arg, ...);

struct my_printf
{
    char flag;
    int i;
    int x;
    int y;
    int z;
};

void what_flags(char const *str, va_list(ap), struct my_printf *p);
void exception(va_list(ap), struct my_printf *p);
void flag_min(va_list(ap), struct my_printf *p);
void flag_min2(va_list(ap), struct my_printf *p);
void flag_maj(va_list(ap), struct my_printf *p);
