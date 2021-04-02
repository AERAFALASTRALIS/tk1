/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** tower_drag
*/

#include "../structe.h"

typedef struct tower_check
{
    init_graph_t *byte;
    sfIntRect *ice;
    sfIntRect *canon;
    sfIntRect *magic;
    sfIntRect *tesla;
}tower_check_t;

typedef struct squared
{
    sfIntRect *one;
    sfIntRect *two;
    sfIntRect *tree;
    sfIntRect *four;
    sfIntRect *five;
    sfIntRect *six;
    sfIntRect *seven;
    sfIntRect *eight;
    sfIntRect *nine;
    sfIntRect *ten;
    sfIntRect *eleven;
}square_t;

tower_check_t *init(void);
void print_on_pressed(init_graph_t *byte, sfVector2f souris);
void print_on_pressed_deux(init_graph_t *byte, sfVector2f souris);
void print_on_pressed_trois(init_graph_t *byte, sfVector2f souris);
void print_on_pressed_quatre(init_graph_t *byte, sfVector2f souris);
square_t *init_square(void);
int check_left(init_graph_t *, square_t *, sfVector2f is, sfVector2i si);
init_graph_t *check_ice(init_graph_t *, tower_check_t *, sfVector2f is, sfVector2i si);
init_graph_t *check_canon(init_graph_t *, tower_check_t *, sfVector2f is, sfVector2i si);
init_graph_t *check_magic(init_graph_t *, tower_check_t *, sfVector2f is, sfVector2i si);
init_graph_t *check_tesla(init_graph_t *, tower_check_t *, sfVector2f is, sfVector2i si);
