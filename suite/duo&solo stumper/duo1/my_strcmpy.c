/*
** EPITECH PROJECT, 2020
** copi
** File description:
** copi
*/

#include "tail.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int d = my_strlen(src);
    int i = 0;
    dest = malloc(sizeof(char) * d);
    if (dest == NULL)
        return NULL;
    for (; i < n; i++);
    while (i <= d)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
