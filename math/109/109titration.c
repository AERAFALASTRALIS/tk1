/*
** EPITECH PROJECT, 2020
** 109
** File description:
** 109
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0'  && *s1 == *s2) {
        s1 = s1 + 1;
        s2 = s2 + 1;
    }
    return (*s1 - *s2);
}

int helper(char *av, int ac)
{
    if (ac != 2)
        return (84);
    char *str = "-h";
    int i = my_strcmp(av, str);
    if (i == 0) {
        my_putstr("USAGE\n");
        my_putstr("    ./109titration file\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    file    a csv file containing vol;ph lines\n");
    }
    return (0);
}

int check_arg(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Error, enter one file\n", 23);
        return 84;
        return 0;
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        helper(av[1], ac);
        return 0;
    }
    int fd = open(av[1], O_RDONLY);
    if (fd == -1) {
        my_putstr("Error: cannot open your file or it does not exist\n");
        return 84;
        return (0);
    }
    close(fd);
    return (0);
}


int main (int ac, char **av)
{
    check_arg(ac, av);
}
