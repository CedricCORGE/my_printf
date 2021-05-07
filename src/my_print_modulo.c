/*
** EPITECH PROJECT, 2020
** my_print_modulo.c
** File description:
** manage % in strings
*/

#include "my.h"

int my_print_modulo(char const *str, int i)
{
    i = i + 2;
    my_putchar('%');
    while (str[i] != ' ' && str[i] != '\0' && str[i] != '%') {
        my_putchar(str[i]);
        i++;
    }
    return (i);
}