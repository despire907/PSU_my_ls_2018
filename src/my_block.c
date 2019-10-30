/*
** EPITECH PROJECT, 2018
** my_block.c
** File description:
** ls
*/

#include "../include/my_ls.h"

int my_block (struct dirent *folder, struct stat sts, const char *fd)
{
    DIR *rep = NULL;
    rep = opendir(fd);
    int i = 0;

    while ((folder = readdir(rep)) != NULL) {
        stat(folder->d_name, &sts);
        if (folder->d_name[0] != '.') {
            i = i + sts.st_blocks;
        }
    }
    i = i  / 2;
    if (closedir(rep) == -1)
        exit(-1);
    return (i);
}