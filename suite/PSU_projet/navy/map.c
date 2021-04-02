/*
** EPITECH PROJECT, 2020
** map
** File description:
** map
*/

#include "include/my.h"

char **make_map(void)
{
    char **map = malloc(sizeof(char *) * 8);

    for (int i = 0; i != 8; i++) {
        map[i] = my_strdup("........");
    }
    return (map);
}

void prompt(char **map)
{
    int i = 0;
    int j = 0;

    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    while (i != 8) {
        my_put_nbr(i + 1);
        my_putstr("|");
        while (j != 8) {
            my_putchar(map[i][j]);
            if (j != 7)
                my_putstr(" ");
            j++;
        }
        j = 0;
        my_putstr("\n");
        i++;
    }
}
