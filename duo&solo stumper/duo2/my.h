/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct option {
    int w;
    int h;
    char p1;
    char p2;
    char a;

} param_t;

void my_putchar(char c);
int my_get_nbr(char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
char **my_run(int t, char **map);
void drow_map(char **map);
void printu(void);
void printd(void);
void printt(void);
void printq(int pt);
void printc(void);
int compt_barre(int lg, char **map);
int interface_play(char **map, int t);
char **remove_barre(char c, int lg, char **map);
char **player(char **map, int t, char c);
void init(param_t *option);
char *my_getline(void);
