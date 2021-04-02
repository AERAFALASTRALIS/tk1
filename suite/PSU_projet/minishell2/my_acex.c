/*
** EPITECH PROJECT, 2020
** access
** File description:
** execution
*/

#include "my.h"

int my_comptte(char *line)
{
    int n = 0;
    int i = 0;
    if (line == NULL)
        return (84);
    while (line[i] != '\0') {
        if (line[i] == ' ')
            n++;
        i++;
    }
    return (n);
}

char *my_strncpy(char *dest, char const *src, int len)
{
    int i = 0;
    dest = malloc(sizeof(char) * len);
    while (i < len) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char **tab(char *line)
{
    int n = my_comptte(line);
    char **str = malloc(sizeof(char *) * (n + 2));
    int ijk[] = {0, 0, 0};
    str[0] = malloc(my_strlen(line) + 1);
    while (line[ijk[0]] != '\0') {
        if (line[ijk[0]] == ' ') {
            str[ijk[1]][ijk[2]] = '\0';
            ijk[2] = 0;
            ijk[1]++;
            str[ijk[1]] = malloc(my_strlen(line) + 1);
        } else {
            str[ijk[1]][ijk[2]] = line[ijk[0]];
            ijk[2]++;
        }
        ijk[0]++;
    }
    str[ijk[1]][ijk[2]] = '\0';
    str[ijk[1] + 1] = NULL;
    return (str);
}

int my_acex(char **str2, char *line, char **env)
{
    if (line == NULL)
        return (84);
    int ligne = 0;
    char **tabe = tab(line);
    char *temp = my_strcat(str2[ligne], tabe[0]);
    while (access(temp, X_OK) != 0) {
        ligne++;
        if (str2[ligne] == NULL)
            return (1);
        temp = my_strcat(str2[ligne], tabe[0]);
    }
    if (access(temp, X_OK) == 0) {
        int child_id = fork();
        if (child_id) {
            waitpid(child_id, 0, 0);
        } else {
            execve(temp, tabe, env);
            exit(1);
        }
    }
    return (0);
}
