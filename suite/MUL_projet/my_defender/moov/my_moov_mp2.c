/*
** EPITECH PROJECT, 2020
** map2
** File description:
** map2
*/

#include "../structe.h"

void ass_moov_mp2_un(init_graph_t *byte)
{
    if (byte->moov.y < 720 && byte->moov.x == 560) {
        run_cible_un_bas(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y += 2;
    }
    if (byte->moov.y == 720 && byte->moov.x < 1070) {
        run_cible_un_droit(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x += 2;
    }
    if (byte->moov.y > 280 && byte->moov.y <= 720 && byte->moov.x == 1070) {
        run_cible_un_haut(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin,  NULL);
        byte->moov.y -= 2;
    }
}

void ass_moov_mp2_deux(init_graph_t *byte)
{
    if (byte->moov.y == 280 && byte->moov.x >= 1070 && byte->moov.x < 1350) {
        run_cible_un_droit(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.x += 2;
    }
    if (byte->moov.y < 1080 && byte->moov.y >= 280 && byte->moov.x == 1350) {
        run_cible_un_bas(byte);
        sfSprite_setPosition(byte->assasin, byte->moov);
        sfRenderWindow_drawSprite(byte->window, byte->assasin, NULL);
        byte->moov.y += 2;
    }
}

void ass_moov_mp2(init_graph_t *byte)
{
    ass_moov_mp2_un(byte);
    ass_moov_mp2_deux(byte);
}
