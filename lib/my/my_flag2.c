/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "../../include/my_ls.h"

void my_pours(char const *s, int i, va_list ap)
{
    (void)(ap);
    if (s[i + 1] == '%') {
        my_putchar('%');
        i++;
    }
}

void my_o(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'o') {
        my_put_nbr_base_unsigned(va_arg(ap, unsigned int), "01234567");
        i++;
    }
}

void my_b(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'b') {
        my_put_nbr_base(va_arg(ap, int), "01");
        i++;
    }
}

void my_p(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'p') {
        my_putstr("0x00");
        my_put_nbr_base_long(va_arg(ap, long int), "0123456789abcdef");
        i++;
    }
}

void my_su(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'S') {
        my_put_str_printable_only(s);
        i++;
    }
}