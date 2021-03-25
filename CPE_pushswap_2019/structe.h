/*
** EPITECH PROJECT, 2019
** structe
** File description:
** structe
*/

#include <unistd.h>
#include <stdlib.h>

typedef struct list {
    int nb;
    struct list *next;
} list_t;

int check(list_t *spatium);
