/*
** EPITECH PROJECT, 2018
** my_ls.c
** File description:
** ls
*/

#include "../include/my_ls.h"

int my_ls(const char *fd)
{
    DIR *rep = NULL;
    struct dirent *folder = NULL;
    rep = opendir(fd);

    if (rep == NULL)
        exit(1);

    while ((folder = readdir(rep)) != NULL) {
        if (folder->d_name[0] != '.')
            my_printf("%s\n", folder->d_name);
    }

    if (closedir(rep) == -1)
        exit(-1);

    return 0;
}

void put(char c)
{
    write(1, &c, 1);
}

int my_strcmp(char const *s1, char const *s2)
{
    int papa = 0;

    while (s1[papa] == s2[papa] && s1[papa] && s2[papa]) {
        ++papa;
    }
    return (s1[papa] - s2[papa]);
}

void my_ls_l_bis(struct dirent *folder, struct stat sts)
{
    struct passwd *pw;
    struct group *gr;
    char *date;

    pw = getpwuid(sts.st_uid);
    gr = getgrgid(sts.st_gid);
    date = ctime(&sts.st_ctime);
    date = epure_date(&date[4]);
    if (folder->d_name[0] != '.') {
        aff_right(sts.st_mode, sts);
        my_printf("%i %s %s\t%u\t%s %s\n", sts.st_nlink, pw->pw_name,
                  gr->gr_name, sts.st_size, date, folder->d_name);
        free(date);
    }
}

int my_ls_l(const char *fd)
{
    struct dirent *folder = NULL;
    struct stat sts;
    my_printf("total %i\n", my_block(folder, sts, fd));
    DIR *rep = NULL;
    rep = opendir(fd);

    if (rep == NULL)
        exit(1);
    while ((folder = readdir(rep)) != NULL) {
        stat(folder->d_name, &sts);
        my_ls_l_bis(folder, sts);
    }
    if (closedir(rep) == -1)
        exit(-1);
    free(folder);
    return 0;
}
