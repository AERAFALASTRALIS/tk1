/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strlen
*/

#include"my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}


int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        write(2, "FAILURE\n", 8);
    }
    if (fd != -1) {
        write(2, "SUCCESS\n", 9);
    }
    return (fd);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\n' && str[i] != '\0')
    {
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

