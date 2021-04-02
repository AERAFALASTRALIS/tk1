/*
** EPITECH PROJECT, 2020
** haut
** File description:
** haut
*/

#include "../structe.h"

void run_cible_un_haut(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 210, 60, 75};
    rectangle.left = 60 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->assasin, rectangle);
}

void run_cible_deux_haut(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 195, 55, 65};
    rectangle.left = 55 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->devil, rectangle);
}

void run_cible_trois_haut(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 192, 64, 64};
    rectangle.left = 64 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->knight, rectangle);
}
