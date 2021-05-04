/*
** EPITECH PROJECT, 2020
** My_sort_int_array
** File description:
** sort array
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    int temp = 0;
    int i = 0;

    while (i != size) {
        if (i > 0 && array[i - 1] > array[i]) {
            temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            i = i - 2;
        }
        i++;
    }
}