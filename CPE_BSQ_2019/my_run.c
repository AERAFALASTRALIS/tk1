/*
** EPITECH PROJECT, 2019
** my_run
** File description:
** my_check_sqouare
*/

#include"my.h"

char **my_run(char *str, long int full_len)
{
    int n = my_strlenbis(str);
    int j = 0;
    int i = 0;
    char **str2 = malloc(sizeof(char *) * (n + 1));

    while (i < n) {
        str2[i] = str + j;
        while (j < full_len && str[j] != '\n')
            j++;
        j++;
        i++;
    }
    str2[n] = NULL;
    return (str2);
}

int my_check_square(int x, int y, int z, char **str2)
{
    int i = y;
    int j = x;
    const int f = j+z;
    const int g = i+z;

    while (i < g) {
        if (str2[i] == NULL)
            return (0);
        j = x;
        while (j < f) {
            if (str2[i][j] == 'o' || str2[i][j] == '\n') {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int *my_find_bsq(int max_x, int max_y, char **str2)
{
    int x = 0;
    int y = 0;
    int s = 0;
    int *bsq_pos = malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        bsq_pos[i] = 0;
    while (y < max_y) {
        x = 0;
        while (x < max_x) {
            s = my_bsq(x, y, bsq_pos[2], str2);
            if (bsq_pos[2] < s) {
                bsq_pos[0] = x;
                bsq_pos[1] = y;
                bsq_pos[2] = s;
            }
            x++;
        }
        y++;
    }
    return (bsq_pos);
}

void my_cross(int *bsq_pos, char **str2)
{
    int i = bsq_pos[1];
    int j = bsq_pos[0];
    const int f = j + bsq_pos[2];
    const int g = i + bsq_pos[2];

    while (i < g) {
        j = bsq_pos[0];
        while (j < f) {
            str2[i][j] = 'x';
            j++;
        }
        i++;
    }
    free(bsq_pos);
    free(str2);
}
