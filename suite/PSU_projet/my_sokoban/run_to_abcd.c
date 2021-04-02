/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

void run_to_a(char **str2, int *tab)
{
    if (str2[tab[1] - 1][tab[0]] == ' ') {
        str2[tab[1]][tab[0]] = ' ';
        tab[1]--;
        str2[tab[1]][tab[0]] = 'P';
    } else if (str2[tab[1] - 1][tab[0]] == 'X'
        && str2[tab[1] - 2][tab[0]] == ' ') {
        str2[tab[1] - 2][tab[0]] = 'X';
        str2[tab[1] - 1][tab[0]] = 'P';
        str2[tab[1]][tab[0]] = ' ';
        tab[1]--;
    } else {
        if (str2[tab[1] - 1][tab[0]] == 'X'
            && str2[tab[1] - 2][tab[0]] == 'O') {
            str2[tab[1] - 2][tab[0]] = 'X';
            str2[tab[1] - 1][tab[0]] = 'P';
            str2[tab[1]][tab[0]] = ' ';
            tab[1]--;
        }
    }
}

void run_to_b(char **str2, int *tab)
{
    if (str2[tab[1] + 1][tab[0]] == ' ') {
        str2[tab[1]][tab[0]] = ' ';
        tab[1]++;
        str2[tab[1]][tab[0]] = 'P';
    } else if (str2[tab[1] + 1][tab[0]] == 'X'
        && str2[tab[1] + 2][tab[0]] == ' ') {
        str2[tab[1] + 2][tab[0]] = 'X';
        str2[tab[1] + 1][tab[0]] = 'P';
        str2[tab[1]][tab[0]] = ' ';
        tab[1]++;
    } else {
        if (str2[tab[1] + 1][tab[0]] == 'X'
            && str2[tab[1] + 2][tab[0]] == 'O') {
            str2[tab[1] + 2][tab[0]] = 'X';
            str2[tab[1] + 1][tab[0]] = 'P';
            str2[tab[1]][tab[0]] = ' ';
            tab[1]++;
        }
    }
}

void run_to_d(char **str2, int *tab)
{
    if (str2[tab[1]][tab[0] + 1] == ' ') {
        str2[tab[1]][tab[0]] = ' ';
        tab[0]++;
        str2[tab[1]][tab[0]] = 'P';
    } else if (str2[tab[1]][tab[0] + 1] == 'X'
        && str2[tab[1]][tab[0] + 2] == ' ') {
        str2[tab[1]][tab[0] + 2] = 'X';
        str2[tab[1]][tab[0] + 1] = 'P';
        str2[tab[1]][tab[0]] = ' ';
        tab[0]++;
    } else {
        if (str2[tab[1]][tab[0] + 1] == 'X'
            && str2[tab[1]][tab[0] + 2] == 'O') {
            str2[tab[1]][tab[0] + 2] = 'X';
            str2[tab[1]][tab[0] + 1] = 'P';
            str2[tab[1]][tab[0]] = ' ';
            tab[0]++;
        }
    }
}

void run_to_c(char **str2, int *tab)
{
    if (str2[tab[1]][tab[0] - 1] == ' ') {
        str2[tab[1]][tab[0]] = ' ';
        tab[0]--;
        str2[tab[1]][tab[0]] = 'P';
    } else if (str2[tab[1]][tab[0] - 1] == 'X'
        && str2[tab[1]][tab[0] - 2] == ' ') {
        str2[tab[1]][tab[0] - 2] = 'X';
        str2[tab[1]][tab[0] - 1] = 'P';
        str2[tab[1]][tab[0]] = ' ';
        tab[0]--;
    } else {
        if (str2[tab[1]][tab[0] - 1] == 'X'
            && str2[tab[1]][tab[0] - 2] == 'O') {
            str2[tab[1]][tab[0] - 2] = 'X';
            str2[tab[1]][tab[0] - 1] = 'P';
            str2[tab[1]][tab[0]] = ' ';
            tab[0]--;
        }
    }
}

void my_sokoban(char **str2, int *tab, int save, int *pos)
{
    char c = getch();
    char haut = (char) KEY_UP;
    char bas = (char) KEY_DOWN;
    char droit = (char) KEY_RIGHT;
    char gauch = (char) KEY_LEFT;
    if (c == haut)
        run_to_a(str2, tab);
    if (c == bas)
        run_to_b(str2, tab);
    if (c == droit)
        run_to_d(str2, tab);
    if (c == gauch)
        run_to_c(str2, tab);
    leso(str2, pos, save);
    refresh();
}
