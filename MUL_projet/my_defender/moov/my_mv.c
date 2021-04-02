/*
** EPITECH PROJECT, 2020
** map1
** File description:
** map1
*/

#include "../structe.h"

void knight_mv_un(init_graph_t *byte)
{
    if (byte->mv.y < 850 && byte->mv.x == 420) {
        run_cible_trois_bas(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y += 5;
    }
    if (byte->mv.y == 850 && byte->mv.x < 1420) {
        run_cible_trois_droit(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x += 5;
    }
    if (byte->mv.y > 400 && byte->mv.y <= 850 && byte->mv.x == 1420) {
        run_cible_trois_haut(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y -= 5;
    }
}

void knight_mv_deux(init_graph_t *byte)
{
    if (byte->mv.y == 400 && byte->mv.x <= 1420 && byte->mv.x > 1000) {
        run_cible_trois_gauche(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x -= 5;
    }
    if (byte->mv.y < 640 && byte->mv.y >= 400 && byte->mv.x == 1000) {
        run_cible_trois_bas(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y += 5;
    }
    if (byte->mv.y == 640 && byte->mv.x <= 1000 && byte->mv.x > 700) {
        run_cible_trois_gauche(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x -= 5;
    }
}

void knight_mv_trois(init_graph_t *byte)
{
    if (byte->mv.y > 130 && byte->mv.y <= 640 && byte->mv.x == 700) {
        run_cible_trois_haut(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.y -= 5;
    }
    if (byte->mv.y == 130 && byte->mv.x >= 700 && byte->mv.x < 1850) {
        run_cible_trois_droit(byte);
        sfSprite_setPosition(byte->knight, byte->mv);
        sfRenderWindow_drawSprite(byte->window, byte->knight, NULL);
        byte->mv.x += 5;
    }
}

void knight_mv(init_graph_t * byte)
{
    knight_mv_un(byte);
    knight_mv_deux(byte);
    knight_mv_trois(byte);
}
