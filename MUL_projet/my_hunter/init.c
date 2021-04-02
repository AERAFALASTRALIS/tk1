/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "structe.h"

void import_tex_order(init_graph_t *byte)
{
    byte->texture_back = sfTexture_createFromFile("texture/map.png", NULL);
    byte->texture_vis = sfTexture_createFromFile("texture/viseur4.png", NULL);
    byte->cible_run = sfTexture_createFromFile("texture/run.png", NULL);
    byte->cible_corbac = sfTexture_createFromFile("texture/corbac.png", NULL);
    byte->cible_sai = sfTexture_createFromFile("texture/saibird.png", NULL);
    byte->music = sfMusic_createFromFile("texture/trigun.ogg");
}

void create_order(init_graph_t *byte)
{
    byte->background = sfSprite_create();
    byte->viseur = sfSprite_create();
    byte->run = sfSprite_create();
    byte->corbac = sfSprite_create();
    byte->sai = sfSprite_create();
    byte->clock = sfClock_create();
}

void textur_order(init_graph_t *byte)
{
    sfSprite_setTexture(byte->run, byte->cible_run, sfTrue);
    sfSprite_setTexture(byte->corbac, byte->cible_corbac, sfTrue);
    sfSprite_setTexture(byte->sai, byte->cible_sai, sfTrue);
    sfSprite_setTexture(byte->viseur, byte->texture_vis, sfTrue);
    sfSprite_setTexture(byte->background, byte->texture_back, sfTrue);
    byte->speedcorbac = 10;
    byte->speedpen = 14;
    byte->speedsai = 7;
}
