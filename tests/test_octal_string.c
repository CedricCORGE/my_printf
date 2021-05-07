/*
** EPITECH PROJECT, 2020
** test_octal_string.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "my_printf.h"

void redirect_all_stdout3(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_octal_string, alphabetic_string, .init = redirect_all_stdout3)
{
    char *str = "hello";

    my_put_octal_string(str);
    cr_assert_stdout_eq_str("hello");
}

Test(my_put_octal_string, octal_string, .init = redirect_all_stdout3)
{
    char str[6];
    my_strcpy(str, "hello");
    str[1] = 8;

    my_put_octal_string(str);
    cr_assert_stdout_eq_str("h\\010llo");
}

Test(my_put_octal_string, alphabetic_char, .init = redirect_all_stdout3)
{
    char *str = "h";

    my_put_octal_string(str);
    cr_assert_stdout_eq_str("h");
}