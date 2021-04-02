/*
** EPITECH PROJECT, 2019
** gestion
** File description:
** gestion
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0'  && *s1 == *s2) {
        s1 = s1 + 1;
        s2 = s2 + 1;
    }
    return (*s1 - *s2);
}

void frizeur(char *str, int *tab, char **str2, int *pox)
{
    free(tab);
    free(str2);
    free(str);
    free(pox);
}
