/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strncpy
*/
#include"my.h"

char *my_strncpy(char *dest, char const *src, int len)
{
    int i = 0;
    while (i < len) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
