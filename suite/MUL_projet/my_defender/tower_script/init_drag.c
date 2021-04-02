/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** init_drag
*/

#include "tower_drag.h"
#include <stdio.h>

void parcing(tower_check_t *tower)
{
    tower->magic = malloc(sizeof(sfIntRect));
    tower->magic->left = 70;
    tower->magic->top = 470;
    tower->magic->height = 110;
    tower->magic->width = 90;
    tower->tesla = malloc(sizeof(sfIntRect));
    tower->tesla->left = 70;
    tower->tesla->top = 270;
    tower->tesla->height = 110;
    tower->tesla->width = 90;
}

tower_check_t *init(void)
{
    tower_check_t *tower = malloc(sizeof(tower_check_t));
    tower->ice = malloc(sizeof(sfIntRect));
    tower->ice->left = 70;
    tower->ice->top = 670;
    tower->ice->height = 110;
    tower->ice->width = 90;
    tower->canon = malloc(sizeof(sfIntRect));
    tower->canon->left = 70;
    tower->canon->top = 870;
    tower->canon->height = 110;
    tower->canon->width = 90;
    parcing(tower);
    return tower;
}

square_t *init_square(void)
{
    square_t *square = malloc(sizeof(square_t));
    square->one = malloc(sizeof(sfIntRect));
    square->one->left = 575;
    square->one->top = 294;
    square->one->height = 110;
    square->one->width = 110;

    square->two = malloc(sizeof(sfIntRect));
    square->two->top = 270;
    square->two->left = 70;
    square->two->height = 110;
    square->two->width = 110;
    return square;
}
