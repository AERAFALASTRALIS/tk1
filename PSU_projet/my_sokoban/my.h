/*
** EPITECH PROJECT, 2019
** my_bsq
** File description:
** my_bsq
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <curses.h>

#ifndef MY_H_
#define MY_H_

#define PACKAGE_SIZE 4000

typedef struct strchain {
    char *str;
    struct strchain *next;
} strchain_t;
int compto(char *str);
int my_strcmp(const char *s1, const char *s2);
void my_putchar(char c);
int my_putstr(char const *str);
int fs_open_file(char const *filepath);
char *my_read(const int fd, long int *full_len);
int *compt(char *str, int *pox);
int comptn(char *str);
char **my_run(char *str, long int full_len);
int *my_find_p(char const *str);
int *my_find_o(char *str, int *pox);
void my_sokoban(char **str2, int *tab, int save, int *pos);
void run_to_a(char **str2, int *tab);
void run_to_b(char **str2, int *tab);
void run_to_d(char **str2, int *tab);
void run_to_c(char **str2, int *tab);
int leso(char **str2, int *pos, int save);
void frizeur(char *str, int *tab, char **str2, int *pox);

#endif /* MY_H_ */
