/*
** EPITECH PROJECT, 2020
** base
** File description:
** base
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
    my_putchar('\n');
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

char *my_getline(void)
{
    char *line = NULL;
    size_t len = 1;
    ssize_t nread;

    line = malloc(sizeof(char) * 2000);
    if ((nread = getline(&line, &len, stdin)) != -1) {
        line[nread - 1] = '\0';
        return (line);
    } else
        return (NULL);
}

int my_strlen(const char *str)
{
    int i = 0;
    if (str == NULL)
        return (84);
    while (str[i] != '\0')
        i++;
    return (i);
}
