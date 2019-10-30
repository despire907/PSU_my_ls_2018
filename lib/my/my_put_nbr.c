/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** putnbr
*/

#include "../../include/my_ls.h"

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
