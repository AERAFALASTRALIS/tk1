/*
** EPITECH PROJECT, 2020
** map1
** File description:
** map1
*/

#include "../structe.h"

void ass_moov_un(init_graph_t *byte)
{
    if (byte->moov.y < 850 && byte->moov.x == 420) {
        run_cible_un_bas(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y += 2;
    }
    if (byte->moov.y == 850 && byte->moov.x < 1420) {
        run_cible_un_droit(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x += 2;
    }
    if (byte->moov.y > 400 && byte->moov.y <= 850 && byte->moov.x == 1420) {
        run_cible_un_haut(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y -= 2;
    }
}

void ass_moov_deux(init_graph_t *byte)
{
    if (byte->moov.y == 400 && byte->moov.x <= 1420 &&  byte->moov.x > 1000) {
        run_cible_un_gauche(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x -= 2;
    }
    if (byte->moov.y < 640 && byte->moov.y >= 400 && byte->moov.x == 1000) {
        run_cible_un_bas(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y += 2;
    }
    if (byte->moov.y == 640 && byte->moov.x <= 1000 && byte->moov.x > 700) {
        run_cible_un_gauche(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x -= 2;
    }
}

void ass_moov_trois(init_graph_t *byte)
{
    if (byte->moov.y > 130 && byte->moov.y <= 640 && byte->moov.x == 700) {
        run_cible_un_haut(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y -= 2;
    }
    if (byte->moov.y == 130 && byte->moov.x >= 700 && byte->moov.x < 1850) {
        run_cible_un_droit(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x += 2;
    }
}

void ass_moov(init_graph_t *byte)
{
    ass_moov_un(byte);
    ass_moov_deux(byte);
    ass_moov_trois(byte);
}
