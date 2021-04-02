/*
** EPITECH PROJECT, 2020
** match
** File description:
** match
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_parcour(char *str, char c, int t)
{
    int compt;

    for (compt = 0; compt < t; compt++)
        str[compt] = c;
    str[compt] = '\0';
    return (str);
}

char **gener_map(int *tab, int width, int height)
{
    int origin = 1;
    int sup = 0;
    int inf = 0;
    char **map;
    map =  malloc(sizeof(char *) *  (height * width));
    for (int y = 0; y < height + 2; y++) {
        if (y < 0) {
            inf = (width -1) - (origin - 1);
            sup = inf + tab[y - 1] - 1;
        }
        for (int x = 0; x < width + 2; x++) {
            map[x] = malloc(sizeof(char *) * width);
            if (x == 0)
                map[y][x] = '|';
            else if (x == width + 1) map[y][x] = '|';
            else if (y == 0 || y == height + 1) map[y][x] = '+';
            else map[y][x] = '.';
        }
        map[height][width] = '\n';
    }
    return (map);
}

int *init_tab(int height)
{
    int *arr_i = malloc(sizeof(int) * height);
    if (arr_i == NULL)
        return (NULL);

    arr_i[0] = 1;
    for (int i = 1; i <= height; i++)
        arr_i[i] = arr_i[i - 1] + 2;
    arr_i[height + 1] = -1;

    return (arr_i);
}

int main(int ac, char **av)
{
    param_t *option = malloc(sizeof(param_t *));
    if (ac < 1 || ac > 6)
        return (84);
    if (ac == 1)
        init(option);
    char **map;
    int *tab = init_tab(option->h);
    int check;
    if (option->h == 0)
        return (84);
    if (option->h < 1 || option->h > 60)
        return (84);
    if (option->w < 1 && option->w > 80)
        return (84);
    map = gener_map(tab, option->w, option->h);
    map = my_run(option->h, map);
    check = interface_play(map, option->h);
    drow_map(map);
    if (check == 84)
        return (0);
    free (map);
    return (check);
}

