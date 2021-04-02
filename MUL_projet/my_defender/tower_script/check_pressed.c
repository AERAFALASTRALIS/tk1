/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** check_pressed.c
*/

#include "tower_drag.h"
#include <stdio.h>

init_graph_t *check_ice(init_graph_t *byte, tower_check_t *tower, sfVector2f si, sfVector2i is)
{
    if (sfIntRect_contains(tower->ice, si.x, is.y)
        && sfMouse_isButtonPressed(sfMouseLeft))
        byte->t = 1;
    if (byte->t == 1)
        print_on_pressed(byte, si);
    return byte;
}

init_graph_t *check_canon(init_graph_t *byte, tower_check_t *tower, sfVector2f souris, sfVector2i souri)
{
    if (sfIntRect_contains(tower->canon, souri.x, souri.y)
        && sfMouse_isButtonPressed(sfMouseLeft))
        byte->t = 2;
    if (byte->t == 2)
        print_on_pressed_deux(byte, souris);
        return byte;
}

init_graph_t *check_magic(init_graph_t *byte, tower_check_t *tower, sfVector2f souris, sfVector2i souri)
{
    if (sfIntRect_contains(tower->magic, souri.x, souri.y)
        && sfMouse_isButtonPressed(sfMouseLeft))
        byte->t = 3;
    if (byte->t == 3)
        print_on_pressed_trois(byte, souris);
    return byte;
}

init_graph_t *check_tesla(init_graph_t *byte, tower_check_t *tower, sfVector2f souris, sfVector2i souri)
{
    if (sfIntRect_contains(tower->tesla, souri.x, souri.y)
        && sfMouse_isButtonPressed(sfMouseLeft))
        byte->t = 4;
    if (byte->t == 4)
        print_on_pressed_quatre(byte, souris);
    return byte;
}
