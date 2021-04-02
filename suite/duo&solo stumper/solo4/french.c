/*
** EPITECH PROJECT, 2020
** solo 4
** File description:
** solo 4
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int first(char *str)
{
    int i = 0;
    while (str[i] != ' ') {
        if (str[i - 1] == '-') {
            my_putchar(str[i - 1]);
            if (str[i] >= 97 && str[i] <= 122)
                my_putchar(str[i] - 32);
        } else
            my_putchar(str[i - 1]);
        i = i + 1;
    }
    return (i);
}

int second(char *str, int i)
{
    while (str[i] != '\0') {
            while (str[i] >= 97 && str[i] <= 122)
                my_putchar(str[i] - 32);
        i = i + 1;
    }
    my_putchar(str[i]);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2 || ac > 2)
        return (84);
    int n = 0;
    char *str = av[1];
    if (str[n] == '\0')
        return (84);
    n = first(str);
    second(str, n);
    return (0);
}
