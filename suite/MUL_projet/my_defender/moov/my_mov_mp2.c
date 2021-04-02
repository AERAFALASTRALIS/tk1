/*
** EPITECH PROJECT, 2020
** map2
** File description:
** map2
*/

#include "../structe.h"

void devil_mov_mp2_un(init_graph_t *byte)
{
    if (byte->mov.y < 720 && byte->mov.x == 560) {
        run_cible_deux_bas(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y += 1;
    }
    if (byte->mov.y == 720 && byte->mov.x < 1070) {
        run_cible_deux_droit(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x += 1;
    }
    if (byte->mov.y > 280 && byte->mov.y <= 720 && byte->mov.x == 1070) {
        run_cible_deux_haut(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y -= 1;
    }
}

void devil_mov_mp2_deux(init_graph_t *byte)
{
    if (byte->mov.y == 280 && byte->mov.x >= 1070 && byte->mov.x < 1350) {
        run_cible_deux_droit(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x += 1;
    }
    if (byte->mov.y < 1080 && byte->mov.y >= 280 && byte->mov.x == 1350) {
        run_cible_deux_bas(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y += 1;
    }
}

void devil_mov_mp2(init_graph_t *byte)
{
    devil_mov_mp2_un(byte);
    devil_mov_mp2_deux(byte);
}
