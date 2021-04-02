/*
** EPITECH PROJECT, 2019
** sprite
** File description:
** sprite
*/

#include "structe.h"

int trigun_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->assasin, byte->moov);
    if (byte->moov.x < 1920) {
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        save = byte->moov;
    }
    if (byte->moov.x >= 1850) {
        byte->miss += 1;
    }
}

int snek_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->devil, byte->mov);
    if (byte->mov.x < 1920) {
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        save = byte->mov;
    }
    if (byte->mov.x >= 1850) {
        byte->miss += 1;
    }
}

int sai_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->knight, byte->mv);
    if (byte->mv.x < 1920) {
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        save = byte->mv;
    }
    if (byte->mv.x >= 1850) {
        byte->miss += 1;
    }
}

int cible(init_graph_t *byte)
{
    trigun_cible(byte);
    snek_cible(byte);
    sai_cible(byte);
    tour(byte);
}
