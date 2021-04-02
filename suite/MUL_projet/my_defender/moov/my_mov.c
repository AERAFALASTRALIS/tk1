/*
** EPITECH PROJECT, 2020
** map1
** File description:
** map1
*/

#include "../structe.h"

void devil_mov_un(init_graph_t *byte)
{
    if (byte->mov.y < 850 && byte->mov.x == 420) {
        run_cible_deux_bas(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y += 1;
    }
    if (byte->mov.y == 850 && byte->mov.x < 1420) {
        run_cible_deux_droit(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x += 1;
    }
    if (byte->mov.y > 400 && byte->mov.y <= 850 && byte->mov.x == 1420) {
        run_cible_deux_haut(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y -= 1;
    }
}

void devil_mov_deux(init_graph_t *byte)
{
    if (byte->mov.y == 400 && byte->mov.x <= 1420 &&  byte->mov.x > 1000) {
        run_cible_deux_gauche(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x -= 1;
    }
    if (byte->mov.y < 640 && byte->mov.y >= 400 && byte->mov.x == 1000) {
        run_cible_deux_bas(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y += 1;
    }
    if (byte->mov.y == 640 && byte->mov.x <= 1000 && byte->mov.x > 700) {
        run_cible_deux_gauche(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x -= 1;
    }
}

void devil_mov_trois(init_graph_t *byte)
{
    if (byte->mov.y > 130 && byte->mov.y <= 640 && byte->mov.x == 700) {
        run_cible_deux_haut(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.y -= 1;
    }
    if (byte->mov.y == 130 && byte->mov.x >= 700 && byte->mov.x < 1850) {
        run_cible_deux_droit(byte);
        sfSprite_setPosition(byte->devil, byte->mov);
        sfRenderWindow_drawSprite(byte->window, byte->devil, NULL);
        byte->mov.x += 1;
    }
}

void devil_mov(init_graph_t *byte)
{
    devil_mov_un(byte);
    devil_mov_deux(byte);
    devil_mov_trois(byte);
}
