/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_putstr
*/

#include"my.h"

int my_putstrin(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putcharin(str[i]);
        i = i+1;
    }
    return (0);
}
