/*
** EPITECH PROJECT, 2019
** hunter
** File description:
** hunter
*/

#include "structe.h"
#include "next.h"

int my_get_event(init_graph_t *byte)
{
    sfEvent event;
    int i = 0;
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
        if (event.type == sfKeyboard_isKeyPressed(sfKeySpace)){
            snek_cible(event, byte);
        }
    }
}

int freezeur(init_graph_t *byte)
{
    sfRenderWindow_destroy(byte->window);
    sfSprite_destroy(byte->run);
    sfMusic_destroy(byte->music);
    free(byte);
    return (0);
}

int run(init_graph_t *byte, int c)
{
    sfIntRect rectangle = {0, 0, 112, 110};
    rectangle.left = 112 * ((c / 7) % 3);
    sfSprite_setTextureRect(byte->run, rectangle);
}

char **map(int av, const char **ac)
{
    if (av != 2)
        return (NULL);
    char **str2;
    int fd = open(ac[1], O_RDONLY);
    long int full_len = 0;
    char *str = my_read(fd, &full_len);

    if (fd == -1)
        return (NULL);
    str2 = my_run(str, full_len);
    return (str2);
}

int main(int ac, const char **av)
{
    init_graph_t *byte = malloc(sizeof(init_graph_t));
    long long random = 0;
    sfEvent event;
    int c = 0;
    all(byte);
    map(ac, av);
    while (sfRenderWindow_isOpen(byte->window))
    {
        cible(byte, event);
        my_get_event(byte);
        random = sfClock_getElapsedTime(byte->clock).microseconds;
        if (sfClock_getElapsedTime(byte->clock).microseconds < 25000)
            sfSleep((sfTime)
                    {25000 - sfClock_getElapsedTime(byte->clock).microseconds});
        run(byte, c);
        sfClock_restart(byte->clock);
        c++;
    }
    freezeur(byte);
    return (0);
}
