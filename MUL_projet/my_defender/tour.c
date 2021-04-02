/*
** EPITECH PROJECT, 2020
** tour
** File description:
** tour
*/

#include "structe.h"

int tour_zero(init_graph_t *byte)
{
    sfVector2f save0;
    sfVector2f s0 = (sfVector2f) {1000, 800};
    sfSprite_setPosition(byte->canon, s0);
    s0.x = 90;
    if (s0.x < 1920) {
        sfSprite_setPosition(byte->canon, s0);
        sfRenderWindow_drawSprite(byte->window, byte->canon, NULL);
        save0 = s0;
    }
    if (s0.x >= 1920) {
        s0.x = -148;
        sfSprite_setPosition(byte->canon, s0);
    }
}

int tour_un(init_graph_t *byte)
{
    sfVector2f save1;
    sfVector2f s1 = (sfVector2f) {900, 600};
    sfSprite_setPosition(byte->ice, s1);
    s1.x = 90;
    if (s1.x < 1920) {
        sfSprite_setPosition(byte->ice, s1);
        sfRenderWindow_drawSprite(byte->window, byte->ice, NULL);
        save1 = s1;
    }
    if (s1.x >= 1920) {
        s1.x = -148;
        sfSprite_setPosition(byte->ice, s1);
    }
}

int tour_deux(init_graph_t *byte)
{
    sfVector2f save2;
    sfVector2f s2 = (sfVector2f) {800, 400};
    sfSprite_setPosition(byte->magic, s2);
    s2.x = 80;
    if (s2.x < 1920) {
        sfSprite_setPosition(byte->magic, s2);
        sfRenderWindow_drawSprite(byte->window, byte->magic, NULL);
        save2 = s2;
    }
    if (s2.x >= 1920) {
        s2.x = -148;
        sfSprite_setPosition(byte->magic, s2);
    }
}

int tour_trois(init_graph_t *byte)
{
    sfVector2f save3;
    sfVector2f s3 = (sfVector2f) {700, 200};
    sfSprite_setPosition(byte->tesla, s3);
    s3.x = 70;
    if (s3.x < 1920) {
        sfSprite_setPosition(byte->tesla, s3);
        sfRenderWindow_drawSprite(byte->window, byte->tesla, NULL);
        save3 = s3;
    }
    if (s3.x >= 1920) {
        s3.x = -148;
        sfSprite_setPosition(byte->tesla, s3);
    }
}

void tour(init_graph_t *byte)
{
    tour_zero(byte);
    tour_un(byte);
    tour_deux(byte);
    tour_trois(byte);
}
