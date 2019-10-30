/*
** EPITECH PROJECT, 2018
** my_ls.h
** File description:
** ls
*/

#ifndef EPITECH_PROJECT_MY_LS_H
#define EPITECH_PROJECT_MY_LS_H

#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>


int my_block (struct dirent *folder, struct stat sts, const char *fd);
int my_ls(const char *fd);
int my_ls_l(const char *fd);
void aff_right(const mode_t mode, struct stat s);
void put(char c);
char *epure_date(char *date);
void my_u(char const *s, int i, va_list ap);
void my_su(char const *s, int i, va_list ap);
void my_p(char const *s, int i, va_list ap);
void my_id(char const *s, int i, va_list ap);
void my_c(char const *s, int i, va_list ap);
void my_s(char const *s, int i, va_list ap);
void my_pours(char const *s, int i, va_list ap);
void my_x(char const *s, int i, va_list ap);
void my_xu(char const *s, int i, va_list ap);
void my_o(char const *s, int i, va_list ap);
void my_b(char const *s, int i, va_list ap);
void my_put_nbr_base_unsigned(unsigned int nb, char *base);
void my_put_nbr_base(int nb, char *base);
void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);
int my_strlen(char const *str);
void my_put_nbr_base_long(long int nb, char *base);
void my_put_str_printable_only(char const *s);
void redirect_all_std(void);
void my_printf(char const *s, ...);
int my_strcmp(char const *s1, char const *s2);
void my_ls_l_bis(struct dirent *folder, struct stat sts);

#endif //EPITECH_PROJECT_MY_LS_H
