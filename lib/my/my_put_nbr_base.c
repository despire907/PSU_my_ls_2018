/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** putnbr
*/

#include "../../include/my_ls.h"

void my_put_nbr_base(int nb, char *base)
{
    int tmp;
    int res;

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