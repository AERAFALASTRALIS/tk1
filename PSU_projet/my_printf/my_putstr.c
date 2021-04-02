/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_putstr
*/

#include"my.h"

int my_putstr(va_list ap)
{
    char const *str = va_arg(ap, char const *);
    int i = 0;
    while (str[i] != '\0')
    {
        my_putcharin(str[i]);
        i = i+1;
    }
    my_putcharin('\n');
    return (0);
}
