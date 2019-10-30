/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "../../include/my_ls.h"

void my_u(char const *s, int i, va_list ap)
{
    if (s[i + 1] == 'u') {
        my_put_nbr_base_unsigned(va_arg(ap, unsigned int), "0123456789");
        i++;
    }
}

void (*ptr[11])(char const *, int, va_list) = {my_s, my_c, my_pours, my_id,
                                                my_x, my_xu, my_o, my_b,
                                                my_p, my_su, my_u};

void my_printf(char const *s, ...)
{
    int i = 0;
    int nb = 0;
    va_list ap;
    va_start (ap, s);

    while (s[i] != '\0') {
        if (s[i] != '%') {
            my_putchar(s[i]);
            i++;
        }
        if (s[i] == '%'){
            while (nb < 11) {
                ptr[nb](s, i, ap);
                ++nb;
            }
            nb = 0;
            i = i + 2;
        }
    }
    va_end(ap);
}