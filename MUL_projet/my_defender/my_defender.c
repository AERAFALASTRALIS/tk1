/*
** EPITECH PROJECT, 2020
** defender
** File description:
** defender
*/

#include "structe.h"
#include <stdio.h>

int my_get_event(init_graph_t *byte, long long random)
{
    sfEvent event;

    on_pressed(event, byte);
    while (sfRenderWindow_pollEvent(byte->window, &event))
    {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(byte->window);
            break;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
            sfRenderWindow_close(byte->window);
            break;
        }
    }
}

int all(init_graph_t *byte, sfVector2f fpoint)
{
    sfVideoMode mode = {1920, 1080, 32};
    byte->window = sfRenderWindow_create(mode, "defender", sfResize
                                         | sfClose, NULL);
    import_tex_order(byte);
    create_order(byte);
    sfRenderWindow_setMouseCursorVisible(byte->window, 0);
    textur_order(byte);
    sfRenderWindow_setFramerateLimit(byte->window, 30);
    byte->moov = (sfVector2f) {420, 80};
    byte->mov = (sfVector2f) {420, 80};
    byte->mv = (sfVector2f) {420, 80};
    sfVector2f vie_pos = (sfVector2f) {1850, 100};
    sfSprite_setPosition(byte->vie, vie_pos);
}

int souri(sfVector2i point, sfVector2f fpoint, init_graph_t *byte)
{
    point = sfMouse_getPositionRenderWindow(byte->window);
    fpoint.x = point.x -25;
    fpoint.y = point.y -20;
    sfSprite_setPosition(byte->curseur, fpoint);
    sfRenderWindow_drawSprite(byte->window, byte->curseur, NULL);
    sfRenderWindow_display(byte->window);
    sfRenderWindow_drawSprite(byte->window, byte->background, NULL);
    sfRenderWindow_drawSprite(byte->window, byte->vie, NULL);
    sfRenderWindow_drawSprite(byte->window, byte->canon, NULL);
    sfRenderWindow_drawSprite(byte->window, byte->ice, NULL);
    sfRenderWindow_drawSprite(byte->window, byte->magic, NULL);
    sfRenderWindow_drawSprite(byte->window, byte->tesla, NULL);
}

int my_game(sfVector2i point, sfVector2f hir, init_graph_t *byte)
{
    long long random = 0;
    while (sfRenderWindow_isOpen(byte->window)) {
        souri(point, hir, byte);
        cible(byte);
        my_get_event(byte, random);
        random = sfClock_getElapsedTime(byte->clock).microseconds;
        if (sfClock_getElapsedTime(byte->clock).microseconds < 25000)
            sfSleep((sfTime)
                    {25000 - sfClock_getElapsedTime(byte->clock).microseconds});
        ass_moov(byte);
        devil_mov(byte);
        knight_mv(byte);
        sfClock_restart(byte->clock);
        byte->c += 1;
    }
}

int main(int ac, char **av)
{
    init_graph_t *byte = malloc(sizeof(init_graph_t));
    sfVector2i point;
    sfVector2f hir;
    byte->c = 0;
    all(byte, hir);
    int i = 0;

    if (ac == 1) {
        i = menu();
        if (i == 1)
            my_game(point, hir, byte);
        else {
            return 0;
        }
        frezeur(byte);
        return (0);
    } else
        return (84);
}
