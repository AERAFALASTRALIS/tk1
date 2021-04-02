/*
** EPITECH PROJECT, 2020
** lit
** File description:
** lit
*/

#include "include/my.h"

int my_atoi(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        int c = str[i] - 48;
        n = n * 10 + c;
        i++;
    }
    return (n);
}

char my_read(char **map, char *path)
{
    int ifd[] = {0,  open(path, O_RDONLY)};
    char buffer[] = "        ";
    pos_t pos;
    while (ifd[0] != 4) {
        int size = read(ifd[1], buffer, 8);
        if (size != (8 - (ifd[0] == 3)))
            return (84);
        int len = buffer[0] - 48;
        pos = (pos_t) {buffer[2] - 65, buffer[3] - 48};
        for (int c = 0; c != len; c++) {
            map[pos.y - 1][pos.x] = len + 48;
            if (pos.x == (buffer[5] - 65))
                pos.y++;
            else
                pos.x++;
        }
        ifd[0]++;
    }
    return (0);
}
