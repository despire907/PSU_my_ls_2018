/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "../../include/my_ls.h"

void my_put_str_printable_only(char const *s)
{
    int i = 0;

    while (s[i] != '\0') {
        if (s[i < 32 || 127 <= s[i]]) {
            my_putchar('\\');
            my_put_nbr_base(s[i], "01234567");
        } else
            my_putchar(s[i]);
        i++;
    }
}
