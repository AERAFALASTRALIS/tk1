/*
** EPITECH PROJECT, 2019
** picine
** File description:
** infin_add
*/

#include <stdlib.h>

int my_putchar(char c)
{
    write(1,&c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != NULL)
    {
        my_putchar(str[i]);
        i = i + 1;
    }
}

char *my_revstr(char *str)
{
    int i = 0;
    int a = 0;
    char c = 0;

    while (str[i] != '\0')
        i++;
    i--;

    while (a < i ){
    c = str[i];
    str[i] = str[a];
    str[a] = c;
        a++;
        i--;
    }
    return (str);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i +1;
    }
    return (i);
}

int main(int argc, char *argv[])
{
    int n = my_strlen(argv[2]) -1;
    int b = my_strlen(argv[1]) -1;
    char result;
    char retenu = 0;
    char *str = malloc(n*b);
    int t = 0;

    while (0 <= n && 0 <= b) {
        result = argv[1][b] + argv[2][n]-48 + retenu;
        retenu = 0;
        if (result >= 58 ) {
            retenu = 1;
            result -= 10;
        }
        str[t] = result;
        n--, b--, t++;
    }
    if (retenu == 1)
        str[t] = retenu +48;
    my_revstr(str);
    my_putstr(str);
    my_putchar('\n');
    return (*str);
}
