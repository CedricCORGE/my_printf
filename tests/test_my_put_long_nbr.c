/*
** EPITECH PROJECT, 2020
** my_put_long_nbr.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "my_printf.h"

void redirect_all_stdout4(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_unsigned_long_nbr, unsigned_long, .init = redirect_all_stdout4)
{
    unsigned long nb = 21474836474852;

    my_put_unsigned_long_nbr(nb);
    cr_assert_stdout_eq_str("21474836474852");
}

Test(my_put_unsigned_longlong_nbr, unsigned_long_long, \
.init = redirect_all_stdout4)
{
    unsigned long long nb = 2147454545483647482;

    my_put_unsigned_longlong_nbr(nb);
    cr_assert_stdout_eq_str("2147454545483647482");
}

Test(my_put_longlong_nbr, neg_long_long, .init = redirect_all_stdout4)
{
    long long nb = -21474836474852;

    my_put_longlong_nbr(nb);
    cr_assert_stdout_eq_str("-21474836474852");
}