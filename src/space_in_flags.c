/*
** EPITECH PROJECT, 2020
** space_in_flags.c
** File description:
** print and skip space in flags
*/

#include "my.h"

void my_putchar_space(int indic)
{
    int k = 0;
    while (k < indic) {
        my_putchar(' ');
        k++;
    }
}

int space_in_flags(char const *str, int i)
{
    int indic = 0;

    while (str[i + 1] == ' ') {
        if (str[i + 2] == 'd' || str[i + 2] == 'i') {
            my_putchar_space(indic + 1);
        }
        indic++;
        i++;
    }
    return (i);
}