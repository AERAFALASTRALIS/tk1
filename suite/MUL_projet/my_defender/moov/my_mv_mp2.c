/*
** EPITECH PROJECT, 2020
** map2
** File description:
** map2
*/

#include "../structe.h"

void knight_mv_mp2_un(init_graph_t *byte)
{
    if (byte->mv.y < 720 && byte->mv.x == 560) {
        run_cible_trois_bas(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y += 5;
    }
    if (byte->mv.y == 720 && byte->mv.x < 1070) {
        run_cible_trois_droit(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x += 5;
    }
    if (byte->mv.y > 280 && byte->mv.y <= 720 && byte->mv.x == 1070) {
        run_cible_trois_haut(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y -= 5;
    }
}

void knight_mv_mp2_deux(init_graph_t *byte)
{
    if (byte->mv.y == 280 && byte->mv.x >= 1070 && byte->mv.x < 1350) {
        run_cible_trois_droit(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x += 5;
    }
    if (byte->mv.y < 1080 && byte->mv.y >= 280 && byte->mv.x == 1350) {
        run_cible_trois_bas(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y += 5;
    }
}

void knight_mv_mp2(init_graph_t * byte)
{
    knight_mv_mp2_un(byte);
    knight_mv_mp2_deux(byte);
}
