/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0'){
        bobo = bobo + 1;
    }
    return (bobo);
}