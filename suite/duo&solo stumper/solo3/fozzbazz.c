/*
** EPITECH PROJECT, 2020
** exo
** File description:
** exo
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_print(int i)
{
    i++;
    if (((i % 2) && (i % 9)) != 0) {
        printf("%i\n", i);
        return (0);
    }
    if (((i % 2) || (i % 9)) == 0) {
        printf("FozzBazz\n");
        return (0);
    }
    if ((i%2) == 0) {
        printf("Fozz\n");
        return (0);
    } else if ((i%9) == 0) {
        printf("Bazz\n");
        return (0);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (atoi(av[1]) > atoi(av[2]))
        return (84);
    if (atoi(av[1]) ==  0)
        return (84);
    int b = atoi(av[2]);
    int c = 0;
    for (int i = atoi(av[1]); i < b; i++) {
        if (((i % 2) && (i % 9)) != 0)
            printf("%i\n", i);
        if (((i % 2) || (i % 9)) == 0)
            printf("FozzBazz\n");
        if ((i%2) == 0)
            printf("Fozz\n");
        if ((i%9) == 0)
            printf("Bazz\n");
        c = i;
    }
    my_print(c);
    return (0);
}
