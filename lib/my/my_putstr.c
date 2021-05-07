/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** displays, one-by-one, the characters of a string.
*/

#include <stddef.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL) {
        my_putchar('(');
        my_putchar('n');
        my_putchar('u');
        my_putchar('l');
        my_putchar('l');
        my_putchar(')');
    } else {
        while (str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    }
    return (0);
}
