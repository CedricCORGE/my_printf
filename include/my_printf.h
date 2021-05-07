/*
** EPITECH PROJECT, 2020
** my_printf.h
** File description:
** proto for project my_printf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

int my_put_long_nbr(long nb);

int my_put_unsigned_long_nbr(unsigned long nb);

int my_put_binary_nbr(unsigned int nb);

int my_put_octal_nbr(int nb);

int my_put_hexa_nbr(int nb);

int my_put_lower_hexa_nbr(int nb);

int my_printf(const char *str, ...);

void my_put_octal_string(char const *str);

int my_put_unsigned_longlong_nbr(unsigned long long nb);

int my_put_longlong_nbr(long long nb);

int my_put_unsigned_int(unsigned int nb);

int my_put_address(void *nb);

int my_put_hexa_address(long long nb);

int space_in_flags(char const *str, int i);


int my_print_modulo(char const *str, int i);

#endif /* !MY_PRINTF_H_ */
