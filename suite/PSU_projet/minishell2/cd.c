/*
** EPITECH PROJECT, 2020
** cd
** File description:
** cd
*/

#include "my.h"

char *find_pwd(char **env)
{
    int xya[] = {0, 0, 0};
    char *f = "PWD=/";
    char *var_pwd = malloc(sizeof(char) * 20000);

    while (env[xya[1]] != NULL) {
        while (env[xya[1]][xya[0]] == f[xya[0]])
            xya[0]++;
        if (xya[0] == 5) {
            while (env[xya[1]][xya[0]] != '\0') {
                var_pwd[xya[2]] = env[xya[1]][xya[0]];
                xya[0]++;
                xya[2]++;
            }
            var_pwd[xya[2]] = '\0';
        }
        else
            xya[0] = 0;
        xya[1]++;
    }
    return (var_pwd);
}

char *find_oldpwd(char **env)
{
    int xya[] = {0, 0, 0};
    char *f = "OLDPWD=/";
    char *var_oldpwd = malloc(sizeof(char) * 20000);

    while (env[xya[1]] != NULL) {
        while (env[xya[1]][xya[0]] == f[xya[0]])
            xya[0]++;
        if (xya[0] == 8) {
            while (env[xya[1]][xya[0]] != '\0') {
                var_oldpwd[xya[2]] = env[xya[1]][xya[0]];
                xya[0]++;
                xya[2]++;
            }
            var_oldpwd[xya[2]] = '\0';
        }
        else
            xya[0] = 0;
        xya[1]++;
    }
    return (var_oldpwd);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
        i++;
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
        return (0);
    else if (s1[i] > s2[i])
        return (1);
    else
        return (-1);
}

void my_cd(char *line, char **env)
{
    char *src = malloc(sizeof(line) + 2);
    char *hub = NULL;
    int a = 0;
    int size = my_strlen(line);
    for (unsigned long i = 0; i < size + 1; ++i)
        src[i] = '\0';
    if (size == 2) {
        hub = find_pwd(env);
        chdir(hub), a = 1;
    }
    if (my_strncmp(line, "cd -", size) == 0 && a == 0){
        hub = find_oldpwd(env);
        chdir(hub), a = 1;
    }
    if (a == 0) {
        for (int c = 0, b = 0; a == 0 && c <= size; c++) {
            if (c >= 3)
                src[b++] = line[c];
        }
        if (chdir(src) == -1)
            write(1, "cd: aucun fichier ou dossier de ce type:\n", 41);
    }
}
