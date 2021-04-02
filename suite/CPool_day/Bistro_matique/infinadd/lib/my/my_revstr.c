/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int i = 0;
    int a = 0;
    char c = 0;

    while (str[i] != '\0')
        i++;
        i = i -1;

    while (a < i ){
    c = str[i];
    str[i] = str[a];
    str[a] = c;
        a++;
        i--;
    }
    return (str);
}
