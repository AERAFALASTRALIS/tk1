/*
** EPITECH PROJECT, 2019
** check
** File description:
** check
*/

#include "structe.h"

int check(list_t *spatium)
{
    list_t *past = spatium;
    list_t *now = spatium->next;
    while (now != NULL) {
        if (now->nb < past->nb)
            return (1);
        past = now;
        now = now->next;
    }
    write(1, "\n", 1);
    return (0);
}
