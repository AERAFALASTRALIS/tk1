/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** gui
*/

#include "tower_drag.h"
#include <stdio.h>

void cut(sfVector2f test, init_graph_t *byte)
{
    sfSprite_setPosition(byte->ice, test);
    sfRenderWindow_drawSprite(byte->window, sfSprite_copy(byte->ice), NULL);
}

tower_check_t *pressed_check_coord(init_graph_t *byte, sfVector2i souri, sfEvent event, sfVector2f souris)
{
    tower_check_t *tower = init();

    byte = check_ice(byte, tower, souris, souri);
    byte = check_canon(byte, tower, souris, souri);
    byte = check_magic(byte, tower, souris, souri);
    byte = check_tesla(byte, tower, souris, souri);
    tower->byte = byte;
    return tower;
}

void on_pressed(sfEvent event, init_graph_t *byte)
{
    sfVector2i souri = sfMouse_getPosition(byte->windos);
    sfVector2f souris;
    sfVector2f test;
    tower_check_t *tower;
    square_t *square = init_square();
    test.x = (float)square->one->left - 10;
    test.y = (float)square->one->height + 50;
    souris.x = souri.x - 40;
    souris.y = souri.y - 130;
    if (sfMouse_isButtonPressed(sfMouseLeft)){
        tower = pressed_check_coord(byte, souri, event, souris);
        byte = tower->byte;
    }
    if ((sfMouse_isButtonPressed(sfMouseLeft) == sfFalse)
        && byte->t != 0) {
        if (byte->t == 1)
            byte->i = check_left(byte, square, souris, souri);
        if (byte->t == 2)
            byte->i = check_left(byte, square, souris, souri);
        byte->t = 0;
    }
    if (byte->i == 10)
        cut(test, byte);
    if (byte->i == 11)
        cut(test, byte);
}
