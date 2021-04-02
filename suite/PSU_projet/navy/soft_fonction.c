/*
** EPITECH PROJECT, 2020
** soft
** File description:
** fonction
*/

#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar(45);
        nb = nb * -1;
    }
    int i;
    if (nb >= 0){
        if (nb >= 10){
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_put_nbr(nb);
            my_putchar(48 + i);
        }
        else
            my_putchar(48 + nb % 10);
    }
}

int my_strlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strdup(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen(str));
    int i = 0;

    while (str[i] != '\0') {
        dup[i] = str[i];
        i++;
    }
    return (dup);
}
