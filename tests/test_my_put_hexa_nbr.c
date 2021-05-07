/*
** EPITECH PROJECT, 2020
** test_my_put_hexa_nbr.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "my_printf.h"

void redirect_all_stdout2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_hexa_nbr, low_number, .init = redirect_all_stdout2)
{
    int nb = 16;

    my_put_hexa_nbr(nb);
    cr_assert_stdout_eq_str("10");
}

Test(my_put_hexa_nbr, high_number, .init = redirect_all_stdout2)
{
    int nb = 123456789;

    my_put_hexa_nbr(nb);
    cr_assert_stdout_eq_str("75BCD15");
}

Test(my_put_lower_hexa_nbr, low_number2, .init = redirect_all_stdout2)
{
    int nb = 16;

    my_put_lower_hexa_nbr(nb);
    cr_assert_stdout_eq_str("10");
}

Test(my_put_lower_hexa_nbr, high_number2, .init = redirect_all_stdout2)
{
    int nb = 123456789;

    my_put_lower_hexa_nbr(nb);
    cr_assert_stdout_eq_str("75bcd15");
}