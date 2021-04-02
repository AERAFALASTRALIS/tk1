/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** check_pressed.c
*/

#include "tower_drag.h"
#include <stdio.h>

int check_left(init_graph_t *byte, square_t *squa, sfVector2f is, sfVector2i si)
{
    int i = 0;
    if (sfIntRect_contains(squa->one, is.x, si.y))
        byte->t = 10;
    if (sfIntRect_contains(squa->two, is.x, si.y))
        byte->t = 11;
    if (byte->t == 10) {
        i = 10;
        return i;
    }
    if (byte->t == 11) {
        i = 11;
        return i;
    }
}
