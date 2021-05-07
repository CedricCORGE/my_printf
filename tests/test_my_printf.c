/*
** EPITECH PROJECT, 2020
** test_my_printf.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "my_printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, print_modulo , .init = redirect_all_std)
{
    my_printf("hello %%");
    cr_assert_stdout_eq_str("hello %");
}

Test(my_printf, int_variable1, .init = redirect_all_std)
{
    int nb = 10;

    my_printf("hello %d", nb);
    cr_assert_stdout_eq_str("hello 10");
}

Test(my_printf, int_variable2, .init = redirect_all_std)
{
    int nb = 15;

    my_printf("hello %if", nb);
    cr_assert_stdout_eq_str("hello 15f");
}

Test(my_printf, char_variable, .init = redirect_all_std)
{
    char c = 'a';

    my_printf("hello %c", c);
    cr_assert_stdout_eq_str("hello a");
}

Test(my_printf, string_variable, .init = redirect_all_std)
{
    char *str = "World";

    my_printf("Hello %s", str);
    cr_assert_stdout_eq_str("Hello World");
}

Test(my_printf, binary_print, .init = redirect_all_std)
{
    int nb = 10;

    my_printf("hello %b", nb);
    cr_assert_stdout_eq_str("hello 1010");
}

Test(my_printf, lower_hexa_print, .init = redirect_all_std)
{
    int nb = 15;

    my_printf("hello %xf", nb);
    cr_assert_stdout_eq_str("hello ff");
}

Test(my_printf, hexa_print, .init = redirect_all_std)
{
    int nb = 15;

    my_printf("hello %X", nb);
    cr_assert_stdout_eq_str("hello F");
}

Test(my_printf, octal_print, .init = redirect_all_std)
{
    int nb = 65;

    my_printf("hello %o bonjour", nb);
    cr_assert_stdout_eq_str("hello 101 bonjour");
}

Test(my_printf, special_string_octal, .init = redirect_all_std)
{
    char str[5];
    my_strcpy(str, "toto");
    str[1] = 6;

    my_printf("hello %S", str);
    cr_assert_stdout_eq_str("hello t\\006to");
}

Test(my_printf, special_string_octal2, .init = redirect_all_std)
{
    char str[5];
    my_strcpy(str, "toto");
    str[1] = 8;

    my_printf("hello %S", str);
    cr_assert_stdout_eq_str("hello t\\010to");
}

Test(my_printf, long_number, .init = redirect_all_std)
{
    long nb = 4524428452542;

    my_printf("hello %ld bonjour", nb);
    cr_assert_stdout_eq_str("hello 4524428452542 bonjour");
}

Test(my_printf, neg_long_number, .init = redirect_all_std)
{
    long nb = -4524428452542;

    my_printf("hello %ld bonjour", nb);
    cr_assert_stdout_eq_str("hello -4524428452542 bonjour");
}

Test(my_printf, longlong_number, .init = redirect_all_std)
{
    long long nb = 18416462541562214;

    my_printf("hello %lld bonjour", nb);
    cr_assert_stdout_eq_str("hello 18416462541562214 bonjour");
}

Test(my_printf, unsigned_long_number, .init = redirect_all_std)
{
    unsigned long nb = 18446744073709551;

    my_printf("hello %lu bonjour", nb);
    cr_assert_stdout_eq_str("hello 18446744073709551 bonjour");
}

Test(my_printf, unsigned_long_long_number, .init = redirect_all_std)
{
    unsigned long long nb = 1844674407370955161;

    my_printf("hello %llu bonjour", nb);
    cr_assert_stdout_eq_str("hello 1844674407370955161 bonjour");
}

Test(my_printf, unsigned_int, .init = redirect_all_std)
{
    unsigned int  nb = 4294967295;

    my_printf("hello %u bonjour", nb);
    cr_assert_stdout_eq_str("hello 4294967295 bonjour");
}

Test(my_printf, modulo_space, .init = redirect_all_std)
{
    int nb = 10;

    my_printf("hello%    d bonjour", nb);
    cr_assert_stdout_eq_str("hello    10 bonjour");
}