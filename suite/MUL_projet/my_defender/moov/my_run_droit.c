/*
** EPITECH PROJECT, 2020
** droit
** File description:
** droit
*/

#include "../structe.h"

void run_cible_un_droit(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 137, 60, 75};
    rectangle.left = 60 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->assasin, rectangle);
}

void run_cible_deux_droit(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 130, 55, 65};
    rectangle.left = 55 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->devil, rectangle);
}

void run_cible_trois_droit(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 128, 64, 64};
    rectangle.left = 64 * ((byte->c / 4) % 4);
    sfSprite_setTextureRect(byte->knight, rectangle);
}
