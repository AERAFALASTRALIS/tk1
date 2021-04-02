/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** palindrome
*/

#include <unistd.h>

char *my_revstr(char *str)
{
    int i = 0;
    int a = 0;
    char c = 0;

    while (str[i] != '\0')
        i++;
        i = i - 1;

    while (a < i){
    c = str[i];
    str[i] = str[a];
    str[a] = c;
        a++;
        i--;
    }
    return (str);
}

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        i++;
        if (s1[i] != s2[i])
            return (84);
    }
    return (0);
}

int detect(char *str)
{
    char *scr = my_revstr(str);
    int i = my_strcmp(str, scr);

    if (i == 84)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);

    int r = detect(av[1]);

    if (r == 84)
        write(1, "not a palindrome.\n", 19);

    if (r == 0)
        write(1, "palindrome!\n", 13);
    return (0);
}
