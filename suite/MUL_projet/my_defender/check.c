/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "structe.h"

int touch(sfEvent event, init_graph_t *byte)
{
    if (byte->mov.x < event.mouseButton.x
        && byte->mov.x+100 > event.mouseButton.x
        && byte->mov.y < event.mouseButton.y
        && byte->mov.y+100 > event.mouseButton.y) {
    }
}
