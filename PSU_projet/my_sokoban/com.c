/*
** EPITECH PROJECT, 2019
** read controleur
** File description:
** read controleur
*/

#include "my.h"

int *compt(char *str, int *pox)
{
    for (int i = 0; str[i] < '\0'; i++) {
        if (str[i] == 'P')
            pox[0]++;
        if (str[i] == 'O')
            pox[1]++;
        if (str[i] == 'X')
            pox[2]++;
        if (pox[0] != 1) {
            write(2, "pas de joueur ou trop de joueur", 31);
            exit (84);
        }
        if (pox[1] != pox[2] || pox[2] != pox[1]) {
            write(2, "pas asser de o ou de x", 22);
            exit (84);
        }
    }
    return (0);
}

int comptn(char *str)
{
    int xoci[4] = {0, 0, 0, 0};
    int save = 0;

    while (str[xoci[3]] != '\0') {
        if (str[xoci[3]] == 'P') {
            xoci[2]++;
            if (xoci[2] != 1)
                return (84);
        }
        if (str[xoci[3]] == 'O')
            xoci[1]++;
        if (str[xoci[3]] == 'X')
            xoci[0]++;
        if (str[xoci[3]] == '\n')
            save++;
        xoci[3]++;
    }
    if (xoci[0] < xoci[1] | xoci[1] == 0 | xoci[2] == 0)
        return (84);
    return (save);
}
