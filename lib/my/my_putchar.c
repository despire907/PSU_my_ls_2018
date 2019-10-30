/*
** EPITECH PROJECT, 2018
** put_char
** File description:
** put_char
*/

#include "../../include/my_ls.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
