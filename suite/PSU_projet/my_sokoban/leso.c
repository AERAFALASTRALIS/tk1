/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** my_sokoban
*/

#include "my.h"

int leso(char **str2, int *pos, int save)
{
    int o = 0;
    int c = 0;
    int n = 0;
    int i = save;

    while (save--) {
        o = pos[n++];
        c = pos[n++];
        if (str2[c][o] == 'X') {
            i--;
        } else if (str2[c][o] == ' ')
            str2[c][o] = 'O';
    }
    if (i == 0) {
        endwin();
        exit(0);
    }
    return (0);
}

int *my_find_o(char *str, int *pox)
{
    int *pos = malloc(sizeof(int) * pox[1] * 2);
    int x = 0;
    int o = 0;
    int c = 0;
    int save = 0;
    while (str[x] != '\0') {
        if (str[x] == 'O') {
            pos[save++] = o;
            pos[save++] = c;
        }
        if (str[x] == '\n') {
            o = -1;
            c++;
        }
        o++;
        x = x + 1;
    }
    return (pos);
}

int compto(char *str)
{
    int save = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'O')
            save++;
        i++;
    }
    return (save);
}
