/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "include/my.h"

int check(char *str)
{
    char a = str[0];
    char z = str[1];
    if (my_strlen(str) != 2) {
        my_putstr("wrong position\n");
        return (0);
    }
    if (65 > a || a > 72) {
        my_putstr("wrong position\n");
        return (0);
    }
    if (49 > z || z > 56) {
        my_putstr("wrong position\n");
        return (0);
    }
    return (1);
}

int attack(char **map, int x, int y)
{
    char pos = map[y][x];

    if (49 <= pos && pos <= 56) {
        map[y][x] = 'x';
        return (1);
    }
    map[y][x] = 'o';
    return (0);
}

void drow(char **map_p1, char **map_p2)
{
    my_putstr("my positions:\n");
    prompt(map_p1);
    my_putstr("\nenemy's positions:\n");
    prompt(map_p2);
    my_putstr("\n");
}

int game_one(char **map_p1, char **map_p2)
{
    drow(map_p1, map_p2);
    char *str;
    do {
        my_putstr("attack: ");
        str = my_getline();
    } while (check(str) != 1);
    int x = str[0] - 65;
    int y = str[1] - 48;
    my_send(ATTACK, x, y);
    my_receive();
    my_putstr("waiting for enemy's attack...\n");
    my_receive();
    x = data->x - 1;
    y = data->y - 1;
    my_putchar(x + 65);
    my_putchar(y + 49);
    usleep(2000);
    if (attack(map_p1, x, y) == 1) {
        my_putstr(": hit\n");
        my_send(HIT, 1, 1);
    } else {
        my_putstr(": miss\n");
        my_send(MISS, 1, 1);
    }
    return (1);
}

int game_two(char **map_p1, char **map_p2)
{
    drow(map_p1, map_p2);
    my_putstr("waiting for enemy's attack...\n");
    my_receive();
    int x = data->x - 1;
    int y = data->y - 1;
    my_putchar(x + 65);
    my_putchar(y + 49);
    usleep(2000);
    if (attack(map_p1, x, y) == 1) {
        my_putstr(": hit\n");
        my_send(HIT, 1, 1);
    } else {
        my_putstr(": miss\n");
        my_send(MISS, 1, 1);
    }
    usleep(2000);
    char *str;
    do {
        my_putstr("attack: ");
        str = my_getline();
    } while (check(str) != 1);
    x = str[0] - 65;
    y = str[1] - 48;
    my_send(ATTACK, x, y);
    my_receive();
    return (1);
}
