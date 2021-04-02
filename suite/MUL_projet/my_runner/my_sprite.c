/*
** EPITECH PROJECT, 2019
** sprite
** File description:
** sprite
*/

#include "structe.h"

int snek_cible(sfEvent event, init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->run, byte->mov);
    save = byte->mov;
    if (event.type == sfKeyboard_isKeyPressed(sfKeySpace) == 1) {
        sfRenderWindow_drawSprite(byte->window, byte->run, NULL);
        byte->mov.y = 705;
    } else if (event.type == sfKeyboard_isKeyPressed(sfKeySpace) == 0) {
        sfRenderWindow_drawSprite(byte->window, byte->run, NULL);
        byte->mov.y = 674;
    }
}

int flor(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->floor, byte->moov);
    byte->moov.x -= 13;
    if (byte->moov.x > -256) {
        sfSprite_setPosition(byte->floor, byte->moov);
        sfRenderWindow_display(byte->window);
        sfRenderWindow_drawSprite(byte->window, byte->background, NULL);
        sfRenderWindow_drawSprite(byte->window, byte->floor, NULL);
        save = byte->moov;

    } else {
        byte->moov.x += 256;
        sfSprite_setPosition(byte->floor, byte->moov);
    }
}

int cible(init_graph_t *byte, sfEvent event)
{
    flor(byte);
    snek_cible(event, byte);
}
