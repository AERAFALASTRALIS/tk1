/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** print_on_pressed
*/

#include "tower_drag.h"
#include <stdio.h>

void print_on_pressed(init_graph_t *byte, sfVector2f souris)
{
    sfSprite_setPosition(byte->ice, souris);
    sfRenderWindow_drawSprite(byte->window, byte->car, NULL);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->ice), NULL);
}

void print_on_pressed_deux(init_graph_t *byte, sfVector2f souris)
{
    sfSprite_setPosition(byte->canon, souris);
    sfRenderWindow_drawSprite(byte->window, byte->car, NULL);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->canon), NULL);
}

void print_on_pressed_trois(init_graph_t *byte, sfVector2f souris)
{
    sfSprite_setPosition(byte->magic, souris);
    sfRenderWindow_drawSprite(byte->window, byte->car, NULL);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->magic), NULL);
}

void print_on_pressed_quatre(init_graph_t *byte, sfVector2f souris)
{
    sfSprite_setPosition(byte->tesla, souris);
    sfRenderWindow_drawSprite(byte->window, byte->car, NULL);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->tesla), NULL);
}