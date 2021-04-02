/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** minishell
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    int i = 0;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putstr("\n");
        i++;
    }
    return (0);
}

char *find_path(char **env)
{
    int xya[] = {0, 0, 0};
    char *f = "PATH=";
    char *var_env = malloc(sizeof(char) * 20000);

    while (env[xya[1]] != NULL) {
        while (env[xya[1]][xya[0]] == f[xya[0]])
            xya[0]++;
        if (xya[0] == 5) {
            while (env[xya[1]][xya[0]] != '\0') {
                var_env[xya[2]] = env[xya[1]][xya[0]];
                xya[0]++;
                xya[2]++;
            }
            var_env[xya[2]] = '\0';
        }
        else
            xya[0] = 0;
        xya[1]++;
    }
    return (var_env);
}

char **path(char *line)
{
    int n = my_comptn(line);
    char **str = malloc(sizeof(char *) * (n + 2));
    int ijk[] = {0, 0, 0};
    str[0] = malloc(sizeof(char) * (my_strlen(line)) + 1);
    while (line[ijk[0]] != '\0') {
        if (line[ijk[0]] == ':') {
            str[ijk[1]][ijk[2]] = '\0';
            ijk[2] = 0;
            ijk[1]++;
            str[ijk[1]] = malloc(sizeof(char) * (my_strlen(line)) + 1);
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

int moteur(char **av, char **env, char **str2, char **str1)
{
    char *line;
    int v = 0;
    int ok = 0;

    do {
        write(1, *str1, my_strlen(*str1));
        write(1, "]$ ", 3);
        line = my_getline();
        if (line == NULL)
            return (84);
        v = compare(line, env, str2, str1);
        if (v == 84)
            return (84);
        ok = my_acex(str2, line, env);
        if (ok == 1)
            write(1, "commande inconnue...\n", 21);
    } while (legal_line(line) != 0);
}

int main(int ac, char **av, char **env)
{
    int i = 0;
    char *str = find_path(env);
    char *src = find_pwd(env);
    char **str1 = path(src);
    char **str2 = path(str);
    while (1) {
        i = moteur(av, env, str2, str1);
        if (i == 84)
            return (84);
    }
    free(str);
    free(src);
    free(str1);
    free(str2);
    return (0);
}
