/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "../include/my_ls.h"

char *epure_date(char *date)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * 13);

    while (i < 12) {
        dest[i] = date[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void aff_right(const mode_t mode, struct stat sts)
{
    if (S_ISDIR(sts.st_mode))
        put('d');
    else
        put('-');
    (mode & S_IRUSR) ? put('r') : put('-');
    (mode & S_IWUSR) ? put('w') : put('-');
    (mode & S_IXUSR) ? put('x') : put('-');
    (mode & S_IRGRP) ? put('r') : put('-');
    (mode & S_IWGRP) ? put('w') : put('-');
    (mode & S_IXGRP) ? put('x') : put('-');
    (mode & S_IROTH) ? put('r') : put('-');
    (mode & S_IWOTH) ? put('w') : put('-');
    (mode & S_IXOTH) ? put('x') : put('-');
    put('.');
    put(' ');
}

void main_bis(int ac, char **av, int i, int j)
{
    if (ac == 3 && !my_strcmp(av[1], "-l")) {
        const char *fd = av[j];
        my_ls_l(fd);
    } else if (ac == 2 && !my_strcmp(av[1], "-l"))
        my_ls_l(".");
    else if (ac > 3 && !my_strcmp(av[1], "-l")) {
        const char *fd = av[j];
        my_printf("%s:\n", fd);
        my_ls_l(fd);
        my_printf("\n");
    }
    if (ac > 2 && my_strcmp(av[1], "-l") && my_strcmp(av[1], "-d")) {
        const char *fd = av[i];
        my_printf("%s:\n", fd);
        my_ls(fd);
        my_printf("\n");
    } else {
        const char *fd = av[i];
        my_ls(fd);
    }
}

int main (int ac, char **av)
{
    int i = 1;
    int j = 2;

    if (ac == 1)
        my_ls(".");

    while (ac != i) {
        if (ac == 3 && !my_strcmp(av[1], "-d")) {
            const char *fd = av[j];
            my_printf("%s\n", fd);
        } else if (ac == 2 && !my_strcmp(av[1], "-d"))
            my_printf(".\n");
        main_bis(ac, av, i, j);
        i++;
        j++;
    }
    return 0;
}