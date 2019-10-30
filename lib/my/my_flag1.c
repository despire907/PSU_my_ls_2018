/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "../../include/my_ls.h"

void my_id(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'i' || s[i + 1] == 'd') {
        my_put_nbr(va_arg(ap, int));
        i++;
    }
}

void my_c(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'c') {
        my_putchar((char) va_arg(ap, int));
        i++;
    }
}

void my_s(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 's') {
        my_putstr(va_arg(ap, char *));
        i++;
    }
}

void my_x(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'x'){
        my_put_nbr_base_unsigned(va_arg(ap, unsigned int), "0123456789abcdef");
        i++;
    }
}

void my_xu(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'X') {
        my_put_nbr_base_unsigned(va_arg(ap, unsigned int), "0123456789ABCDEF");
        i++;
    }
}