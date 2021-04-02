/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "structe.h"

void import_tex_order(init_graph_t *byte)
{
    byte->texture_back = sfTexture_createFromFile("map/map1.png", NULL);
    byte->texture_car = sfTexture_createFromFile("map/cal1.png", NULL);
    byte->texture_vie = sfTexture_createFromFile("menu/vie.png", NULL);
    byte->texture_curs = sfTexture_createFromFile("map/curseur.png", NULL);
    byte->cible_ass = sfTexture_createFromFile("enemies/assasin.png", NULL);
    byte->cible_dev = sfTexture_createFromFile("enemies/devil.png", NULL);
    byte->cible_kni = sfTexture_createFromFile("enemies/knight.png", NULL);
    byte->tourelle_ca = sfTexture_createFromFile("tower/tower-canon.png", NULL);
    byte->tourelle_ice = sfTexture_createFromFile("tower/tower-ice.png", NULL);
    byte->tourelle_ma = sfTexture_createFromFile("tower/tower-magic.png", NULL);
    byte->tourelle_te = sfTexture_createFromFile("tower/tower-tesla.png", NULL);
}

void create_order(init_graph_t *byte)
{
    byte->background = sfSprite_create();
    byte->car = sfSprite_create();
    byte->vie = sfSprite_create();
    byte->curseur = sfSprite_create();
    byte->assasin = sfSprite_create();
    byte->devil = sfSprite_create();
    byte->knight = sfSprite_create();
    byte->canon = sfSprite_create();
    byte->ice = sfSprite_create();
    byte->magic = sfSprite_create();
    byte->tesla = sfSprite_create();
    byte->clock = sfClock_create();
}

void textur_order(init_graph_t *byte)
{
    sfSprite_setTexture(byte->assasin, byte->cible_ass, sfTrue);
    sfSprite_setTexture(byte->devil, byte->cible_dev, sfTrue);
    sfSprite_setTexture(byte->knight, byte->cible_kni, sfTrue);
    sfSprite_setTexture(byte->car, byte->texture_car, sfTrue);
    sfSprite_setTexture(byte->curseur, byte->texture_curs, sfTrue);
    sfSprite_setTexture(byte->vie, byte->texture_vie, sfTrue);
    sfSprite_setTexture(byte->canon, byte->tourelle_ca, sfTrue);
    sfSprite_setTexture(byte->ice, byte->tourelle_ice, sfTrue);
    sfSprite_setTexture(byte->magic, byte->tourelle_ma, sfTrue);
    sfSprite_setTexture(byte->tesla, byte->tourelle_te, sfTrue);
    sfSprite_setTexture(byte->background, byte->texture_back, sfTrue);
}

void frezeur(init_graph_t *byte)
{
    sfRenderWindow_destroy(byte->window);
    sfSprite_destroy(byte->assasin);
    sfSprite_destroy(byte->devil);
    sfSprite_destroy(byte->knight);
    sfSprite_destroy(byte->canon);
    sfSprite_destroy(byte->ice);
    sfSprite_destroy(byte->magic);
    sfSprite_destroy(byte->tesla);
    free (byte);
}
