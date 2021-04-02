/*
** EPITECH PROJECT, 2020
** fuzz
** File description:
** bozz
*/

#include <unistd.h>
#include <stdlib.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar(45);
        nb = nb * -1;
    }
    int i;
    if (nb >= 0){
        if (nb >= 10){
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_put_nbr(nb);
            my_putchar(48 + i);
        }
        else
            my_putchar(48 + nb % 10);
    }
}

void my_fuzzbozz(int a, int b)
{
    for (int i = a; i <= b; i++) {
        if (((i % 2) || (i % 3)) == 0)
            write(1, "FuzzBozz\n", 9);
        else if ((i % 2) == 0)
            write(1, "Fuzz\n", 5);
        else if ((i % 3) == 0)
            write(1, "Bozz\n", 5);
        else {
            my_put_nbr(i);
            write(1, "\n", 1);
        }
    }
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 3)
        return (84);
    if (atoi(av[1]) > atoi(av[2])) {
        write(2, "Error: the second parameter", 27);
        write(2, " must be greater than the first one.\n", 37);
        return (84);
    }
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    my_fuzzbozz(a, b);
    return (0);
}
