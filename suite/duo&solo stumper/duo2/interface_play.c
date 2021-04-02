/*
** EPITECH PROJECT, 2020
** math
** File description:
** math
*/

#include "my.h"

int lose(char **map)
{
    for (int y = 1; map[y] != NULL; y++) {
        if (compt_barre(y, map) != 0)
            return (84);
    }
    return (0);
}

int interface_play(char **map, int t)
{
    char x = 'X';
    char c = 'O';
    while (42) {
        map = player(map, t, x);
        if (map == NULL)
            return (84);
        if (lose(map) == 0) {
            my_putstr("You lost, too bad...");
            return (2);
        }
        map = player(map, t, c);
        if (map == NULL)
            return (84);
        if (lose(map) == 0) {
            my_putstr("You lost, too bad...");
            return (1);
        }
    }
}
