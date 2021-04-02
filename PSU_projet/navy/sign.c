/*
** EPITECH PROJECT, 2020
** sig
** File description:
** sig
*/

#include "include/my.h"

void my_send(enum typo type, int x, int y)
{
    int tmp = 1;
    for (int i = 0; i != 3; i++) {
        if ((type &tmp) != 0) {
            kill(data->pid, SIGUSR2);
            usleep(2000);
        } else {
            kill(data->pid, SIGUSR1);
            usleep(2000);
        }
        tmp = tmp * 2;
    }
    for (int i = 0; i != x; i++) {
        kill(data->pid, SIGUSR1);
        usleep(2000);
    }
    for (int i = 0; i != y; i++) {
        kill(data->pid, SIGUSR2);
        usleep(2000);
    }
    kill(data->pid, SIGUSR1);
}

int my_get_pid_one(void)
{
    int pid_t = getpid();
    my_putstr("my_pid: ");
    my_put_nbr(pid_t);
    my_putstr("\n");
    my_putstr("Waiting for enemy connection...");
    my_putstr("\n");
    pause();
}
