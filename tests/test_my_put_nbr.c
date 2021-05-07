/*
** EPITECH PROJECT, 2020
** test_my_put_nbr.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, neg_number, .init = redirect_all_stdout)
{
    int nb = -255;

    my_put_nbr(nb);
    cr_assert_stdout_eq_str("-255");
}

Test(my_put_nbr, pos_number, .init = redirect_all_stdout)
{
    int nb = 1457;

    my_put_nbr(nb);
    cr_assert_stdout_eq_str("1457");
}