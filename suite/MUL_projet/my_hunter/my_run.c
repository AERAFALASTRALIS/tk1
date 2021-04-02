/*
** EPITECH PROJECT, 2020
** run
** File description:
** run
*/

#include "structe.h"

void run_cible_un(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 0, 112, 110};
    rectangle.left = 112 * ((byte->c / 7) % 3);
    sfSprite_setTextureRect(byte->run, rectangle);
}

void run_cible_deux(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 0, 127, 94};
    rectangle.left = 127 * ((byte->c / 7) % 7);
    sfSprite_setTextureRect(byte->corbac, rectangle);
}

void run_cible_trois(init_graph_t *byte)
{
    sfIntRect rectangle = {0, 0, 129, 157};
    rectangle.left = 129 * ((byte->c / 7) % 7);
    sfSprite_setTextureRect(byte->sai, rectangle);
}

void run(init_graph_t *byte)
{
    run_cible_un(byte);
    run_cible_deux(byte);
    run_cible_trois(byte);
}
