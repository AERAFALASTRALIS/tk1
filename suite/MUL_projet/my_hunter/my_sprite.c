/*
** EPITECH PROJECT, 2019
** sprite
** File description:
** sprite
*/

#include "structe.h"

int pen_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->run, byte->moov);
    byte->moov.x += byte->speedpen;
    if (byte->moov.x < 1920) {
        sfSprite_setPosition(byte->run, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->run, NULL);
        save = byte->moov;
    }
    if (byte->moov.x >= 1920) {
        byte->miss += 1;
        byte->moov.x = -148;
        sfSprite_setPosition(byte->run, byte->moov);
    }
}

int corbac_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->corbac, byte->mov);
    byte->mov.x += byte->speedcorbac;
    if (byte->mov.x < 1920) {
        sfSprite_setPosition(byte->corbac, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->corbac, NULL);
        save = byte->mov;
    }
    if (byte->mov.x >= 1920) {
        byte->mov.x = -148;
        sfSprite_setPosition(byte->corbac, byte->mov);
    }
}

int sai_cible(init_graph_t *byte)
{
    sfVector2f save;
    sfSprite_setPosition(byte->sai, byte->mv);
    byte->mv.x += byte->speedsai;
    if (byte->mv.x < 1920) {
        sfSprite_setPosition(byte->sai, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->sai, NULL);
        save = byte->mv;
    }
    if (byte->mv.x >= 1920) {
        byte->miss += 1;
        byte->mv.x = -148;
        sfSprite_setPosition(byte->sai, byte->mv);
    }
}

int cible(init_graph_t *byte)
{
    if (byte->miss == 2)
        return (0);
    pen_cible(byte);
    corbac_cible(byte);
    sai_cible(byte);
}
