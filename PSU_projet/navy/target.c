/*
** EPITECH PROJECT, 2020
** target
** File description:
** target
*/

#include "include/my.h"

void my_attack_p1(char **map_p1, int x, int y)
{
    x = x - 1;
    y = y - 1;
    if (map_p1[y][x] != '.')
        map_p1[y][x] = 'x';
}

void my_attack_p2(char **map_p2, int x, int y)
{
    x = x - 1;
    y = y - 1;
    map_p2[y][x] = 'x';
}
