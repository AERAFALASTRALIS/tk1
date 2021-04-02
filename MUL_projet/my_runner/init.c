/*
** EPITECH PROJECT, 2020
** initialise
** File description:
** initialise
*/

#include "structe.h"

int creata(init_graph_t *byte, sfVideoMode mode)
{
    byte->window = sfRenderWindow_create(mode, "my_runneur", sfResize |
                                         sfClose, NULL);
    byte->texture_back = sfTexture_createFromFile("texture/bg_8.png", NULL);
    byte->texture_floor = sfTexture_createFromFile("texture/floor_2.png", NULL);
    byte->player_run = sfTexture_createFromFile("texture/run.png", NULL);
    byte->player_jump = sfTexture_createFromFile("texture/jump.png", NULL);
    byte->music = sfMusic_createFromFile("texture/musique.ogg");
    byte->background = sfSprite_create();
    byte->floor = sfSprite_create();
    byte->run = sfSprite_create();
    byte->jump = sfSprite_create();
    byte->clock = sfClock_create();
    sfSprite_setTexture(byte->run, byte->player_run, sfTrue);
    sfSprite_setTexture(byte->jump, byte->player_jump, sfTrue);
    sfSprite_setTexture(byte->floor, byte->texture_floor, sfTrue);
    sfSprite_setTexture(byte->background, byte->texture_back, sfTrue);
    sfRenderWindow_setFramerateLimit(byte->window, 60);
}

int all(init_graph_t *byte)
{
    sfVideoMode mode = {1920, 1080, 32};
    creata(byte, mode);
    byte->mov = (sfVector2f) {10, 674};
    byte->moov = (sfVector2f) {0, 800};
    sfMusic_play(byte->music);
    sfMusic_setLoop(byte->music, sfTrue);
}
