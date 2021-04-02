/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** my_sokoban
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    int c = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\n') {
            c++;
        }
        i = i + 1;
    }
    return (i);
}

int my_strlenbis(char const *str)
{
    int i = 0;
    int c = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\n') {
            c++;
        }
        i = i + 1;
    }
    return (c);
}

int *my_find_p(char const *str)
{
    int *tab = malloc(sizeof(int) * 2);
    int i = 0;
    int c = 0;
    int p = 0;

    while (str[i] != '\0' && str[i] != 'P') {
        if (str[i] == '\n') {
            p = -1;
            c++;
        }
        p++;
        i = i + 1;
    }
    tab[0] = p;
    tab[1] = c;
    return (tab);
}

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

int fs_open_file(char const *filepath)
{
    if (filepath == NULL)
        return (-1);
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        write(2, "FAILURE\n", 8);
    }
    if (fd != -1) {
        write(2, "SUCCESS\n", 9);
    }
    return (fd);
}
