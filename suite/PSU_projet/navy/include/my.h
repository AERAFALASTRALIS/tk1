/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

typedef struct data {
    int pid;
    int message;
    int compt;
    int receive;
    int isend;
    int x;
    int y;
} data_t;

data_t data[1];

typedef struct pos {
    int x;
    int y;
} pos_t;

enum typo{
    CONNECTION,
    ATTACK,
    HIT,
    MISS,
};

void my_putchar(char c);
int my_put_nbr(int nb);
void my_putstr(char *str);
int my_strlen(char *str);
char *my_strdup(char *str);
int my_atoi(char *str);
int check(char *str);
void my_player_two(char **av);
void my_player_one(char **av);
int my_signal (int ac, char **av);
void my_receive(void);
int my_get_pid_one(void);
char **make_map(void);
char *my_getline(void);
void prompt(char **map_p1);
char my_read(char **map_p1, char *path);
void my_attack_p1(char **map_p1, int x, int y);
void my_attack_p2(char **map_p2, int x, int y);
int game_two(char **map_p1, char **map_p2);
int game_one(char **map_p1, char **map_p2);
static void hdl (int sig, siginfo_t *siginfo, void *context);
void my_send(enum typo type, int x, int y);

#endif /* !MY_H_ */
