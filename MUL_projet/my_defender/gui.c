/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** gui
*/

#include "structe.h"
#include <stdio.h>

void print_on_pressed(init_graph_t *byte, sfVector2f souris, sfEvent event)
{
    sfSprite_setPosition(byte->ice, souris);
    sfRenderWindow_drawSprite(byte->window, byte->car, NULL);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->ice), NULL);
}

void pressed_check_coord(init_graph_t *byte, sfVector2i souri, sfEvent event, sfVector2f souris)
{
    sfIntRect *rect_un = malloc(sizeof(sfIntRect));
    rect_un->left = 70;
    rect_un->top = 670;
    rect_un->height = 110;
    rect_un->width = 90;

    if (sfIntRect_contains(rect_un, souri.x, souri.y))
        byte->t = 1;
    if (byte->t == 1)
        print_on_pressed(byte, souris, event);
}

void on_pressed(sfEvent event, init_graph_t *byte)
{
    sfVector2i souri;
    sfVector2f souris;
    sfSprite *clone;

    souri = sfMouse_getPosition(byte->windos);
    souris.x = souri.x - 40;
    souris.y = souri.y - 130;

    if (sfMouse_isButtonPressed(sfMouseLeft))
        pressed_check_coord(byte, souri, event, souris);
    if ((sfMouse_isButtonPressed(sfMouseLeft) == sfFalse))
        byte->t = 0;
}
