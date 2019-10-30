/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "../../include/my_ls.h"

void my_put_nbr_base_unsigned(unsigned int nb, char *base)
{
    unsigned int tmp;
    unsigned int res;

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    tmp = nb % my_strlen(base);
    res = (nb - tmp) / my_strlen(base);

    if (res != 0)
        my_put_nbr_base(res, base);
    my_putchar(base[tmp]);
}