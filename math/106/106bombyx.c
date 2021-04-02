/*
** EPITECH PROJECT, 2020
** bomby
** File description:
** bomby
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
        my_putstr("    ./106bombyx n [k | i0 i1]\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    n number of first generation individuals\n");
        my_putstr("    k growth rate from 1 to 4\n");
        my_putstr("    i0 initial generation (included)\n");
        my_putstr("    i1 final generation (included)\n");
    }
    return (0);
}

int algo(char *str1, char *str2)
{
    double n = atof(str1);
    double k = atof(str2);
    if (k > 4 || k < 1)
        return (84);
    for (int i = 1; i <= 100; i++) {
        printf("%i %.2f\n", i, n);
        n *= k*((1000-n)/1000);
    }
    return (0);
}

double algobis(double k, char *str1, char *str2, char *str3)
{
    double n = atof(str1);
    double nb = atof(str2);
    if (k > 4 || k < 1)
	return (84);
    for (int i = 1; i < nb; i++) {
//	printf("%.2f %.2f\n", k, n);
	n *= k*((1000-n)/1000);
    }
    return (n);
}

int algotow(double k, double n, char *str2, char *str3)
{
    double nbt = atof(str3);
    double nb = atof(str2);
    double save = nb;
    if (k > 4 || k < 1)
        return (84);
    for (int i = 1; nb <= nbt; nb++) {
        printf("%.2f %.2f\n", k, n);
        n *= k*((1000-n)/1000);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2 || ac > 4)
        return (84);
    double n = 0;
    if (ac == 2)
        helper(av[1], ac);
    if (ac == 3)
        algo(av[1], av[2]);
    if (ac == 4) {
        for (double k = 1; k <= 4 ; k = k += 0.01) {
        n = algobis(k, av[1], av[2], av[3]);
        algotow(k, n, av[2], av[3]);
        }
    }
}
