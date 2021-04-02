/*
** EPITECH PROJECT, 2020
** outil
** File description:
** outil
*/

#include "my.h"

char *my_strcat(char const *dest, char const *src)
{
    int	lon = my_strlen(dest);
    int	lan = my_strlen(src);
    char *str = malloc(sizeof(char) * (lon + lan + 2));
    int n = 0;
    int i = 0;

    while (dest[i] != '\0') {
        str[i] = dest[i];
        i++;
    }
    str[i] = '/';
    i++;
    while (src[n] != '\0') {
        str[i] = src[n];
        n++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

void environement(char **env)
{
    int i = 0;
    while (env[i] != NULL) {
        my_putstr(env[i]);
        i++;
    }
}

int compare(char *line, char **env, char **str2, char **str1)
{
    if (my_strcmp(line, "env") == 0)
        environement(env);
    if (my_strcmp(line, "cd") == 0)
        my_cd(line, str1);
    if (my_strcmp(line, "exit") == 0)
        return (84);
}

int legal_line(char *line)
{
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] == '*')
            return (84);
        i++;
    }
}

int my_comptn(char *line)
{
    int n = 0;
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] == ':')
            n++;
        i++;
    }
    return (n);
}
