/*
** EPITECH PROJECT, 2020
** solostumper
** File description:
** solostumper
*/

#include <unistd.h>

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0') {
        s1 = s1 + 1;
        s2 = s2 + 1;
    }
    return (*s1 - *s2);
}

int findword(char *word, char *vl)
{
    int i = 0;
    int l = 0;
    int iv = 0;

    while (vl[i] != '\0') {
        if (vl[iv] == word[l+1])
            return 1;
        if (vl[i] == word[l])
            l++;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    int v;
    int y;
    char *word = av[1];
    char *vl = av[2];

    v = findword(word, vl);
    y = my_strcmp(word, vl);
    if (v == 1 | y == 1) {
        write (1, "1\n", 2);
    } else {
        write (1, "0\n", 2);
    }
    return (0);
}
