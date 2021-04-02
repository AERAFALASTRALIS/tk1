/*
** EPITECH PROJECT, 2020
** gauche
** File description:
** gauche
*/

#include "../structe.h"

void run_cible_un_gauche(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 70, 60, 75};
    rectangle.left = 60 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->assasin, rectangle);
}

void run_cible_deux_gauche(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 65, 55, 65};
    rectangle.left = 55 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->devil, rectangle);
}

void run_cible_trois_gauche(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 64, 64, 64};
    rectangle.left = 64 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->knight, rectangle);
}
