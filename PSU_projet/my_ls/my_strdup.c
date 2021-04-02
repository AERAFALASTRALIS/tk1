/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strdup
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i +1;
    }
    return (i);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i = i + 1;
    }
    my_putchar(' ');
    my_putchar(' ');
    return (0);
}

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0'  && *s1 == *s2) {
        if (*s1 > 64 && *s1 < 91)
            return (0);
        if (*s2 > 64 && *s2 < 91)
            return (0);
        s1 = s1 + 1;
        s2 = s2 + 1;
    }
    return (*s1 - *s2);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    char *str;
    int i = my_strlen(src) + 1;

    str = malloc(sizeof(char) * i);
    my_strcpy(str, src);
    return (str);
}
