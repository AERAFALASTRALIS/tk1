/*
** EPITECH PROJECT, 2020
** playeur
** File description:
** playeur
*/

#include "my.h"

int legal_line(int lg, int t)
{
    if (lg < 0) {
        printu();
        return (84);
    }
    if (lg == 0 || lg > t) {
        printd();
        return (84);
    }
    return (0);
}

int compt_barre(int lg, char **map)
{
    int compt = 0;

    for (int i = 0; map[lg][i] != '\0'; i++)
        if (map[lg][i] == '.')
            compt++;
    return (compt);
}

char **remove_barre(char c, int lg, char **map)
{
    int i = 1;
    for (; map[i][lg] != '+'; i++);
    if (map[i][lg] == '+') {
        map[i-1][lg] = c;
        return (map);
    } else
        return (NULL);
}

char **player(char **map, int t, char c)
{
    int lnm[] = {0, 0, 0};
    char *line;

    do {
        write(1, "Player X, where do you want to play: ", 37);
        line = my_getline();
        if (line == NULL)
            return (NULL);
        lnm[0] = my_get_nbr(line);
        free(line);
    } while (legal_line(lnm[0], t) != 0);
    lnm[2] = compt_barre(lnm[0], map);
    map = remove_barre(c, lnm[0], map);
    drow_map(map);
    return (map);
}
