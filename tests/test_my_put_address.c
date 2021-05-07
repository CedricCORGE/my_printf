/*
** EPITECH PROJECT, 2020
** test_my_put_address.c
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "my_printf.h"

void redirect_all_std2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_address, address, .init = redirect_all_std2)
{
    long nb = 25245152;

    my_put_address((void *) nb);
    cr_assert_stdout_eq_str("0x18135e0");
}