/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** hunter
*/

#include "structe.h"

int my_get_event(init_graph_t *byte, long long random)
{
    sfEvent event;
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
        if (event.type == sfEvtMouseButtonPressed
            && event.mouseButton.button == 0) {
            checktouch(event, byte, random);
        }
    }
}

int all(init_graph_t *byte, sfVector2f fpoint)
{
    sfVideoMode mode = {1920, 1080, 32};
    byte->c = 0;
    byte->window = sfRenderWindow_create(mode, "my_hunter", sfResize |
                                         sfClose, NULL);
    import_tex_order(byte);
    create_order(byte);
    sfRenderWindow_setMouseCursorVisible(byte->window, 0);
    textur_order(byte);
    sfRenderWindow_setFramerateLimit(byte->window, 60);
    sfMusic_play(byte->music);
    byte->moov = (sfVector2f) {600, 50};
    byte->mov = (sfVector2f) {50, 100};
    byte->mv = (sfVector2f) {500, 500};
    sfMusic_setLoop(byte->music, sfTrue);
}

int souri(sfVector2i point, sfVector2f fpoint, init_graph_t *byte)
{
    point = sfMouse_getPositionRenderWindow(byte->window);
    fpoint.x = point.x -90;
    fpoint.y = point.y -85;
    sfSprite_setPosition(byte->viseur, fpoint);
    sfRenderWindow_drawSprite(byte->window, byte->viseur, NULL);
    sfRenderWindow_display(byte->window);
    sfRenderWindow_drawSprite(byte->window, byte->background, NULL);
}

void frezeur(init_graph_t *byte)
{
    my_put_nbr(byte->score);
    write(1, "\n", 1);
    sfRenderWindow_destroy(byte->window);
    sfSprite_destroy(byte->run);
    sfSprite_destroy(byte->corbac);
    sfSprite_destroy(byte->sai);
    sfMusic_destroy(byte->music);
    free (byte);
}

int main(void)
{
    init_graph_t *byte = malloc(sizeof(init_graph_t));
    sfVector2i point;
    sfVector2f hir;
    long long random = 0;
    all(byte, hir);
    while (sfRenderWindow_isOpen(byte->window)) {
        souri(point, hir, byte);
        cible(byte);
        my_get_event(byte, random);
        random = sfClock_getElapsedTime(byte->clock).microseconds;
        if (sfClock_getElapsedTime(byte->clock).microseconds < 25000)
            sfSleep((sfTime)
                    {25000 - sfClock_getElapsedTime(byte->clock).microseconds});
        run(byte);
        sfClock_restart(byte->clock);
        byte->c += 1;
    }
    frezeur(byte);
    return (0);
}
