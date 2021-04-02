/*
** EPITECH PROJECT, 2020
** my_get_line
** File description:
** my_getline
*/

#include "include/my.h"

char *my_getline(void)
{
    char *buf = NULL;
    size_t size;
    int len = getline(&buf, &size, stdin);
    if (buf == NULL)
        return (NULL);
    if (len <= 0) {
        return (NULL);
    }
    buf[len - 1] = '\0';
    return (buf);
}
