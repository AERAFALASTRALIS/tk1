/*
** EPITECH PROJECT, 2020
** check
** File description:
** check
*/

#include "structe.h"

int corbactouch(sfEvent event, init_graph_t *byte, long long random)
{
    if (byte->mov.x < event.mouseButton.x
        && byte->mov.x+100 > event.mouseButton.x
        && byte->mov.y < event.mouseButton.y
        && byte->mov.y+100 > event.mouseButton.y) {
        byte->speedcorbac += 5;
        byte->score -= 100;
        byte->mov.x = -148;
        byte->mov.y = random * 5 % 500;
    }
}

int pentouch(sfEvent event, init_graph_t *byte, long long random)
{
    if (byte->moov.x < event.mouseButton.x
        && byte->moov.x+100 > event.mouseButton.x
        && byte->moov.y < event.mouseButton.y
        && byte->moov.y+100 > event.mouseButton.y) {
        byte->speedpen += 12;
        byte->score += 15;
        byte->moov.x = -148;
        byte->moov.y = random * 5 % 500;
    }
}

int saitouch(sfEvent event, init_graph_t *byte, long long random)
{
    if (byte->mv.x < event.mouseButton.x
        && byte->mv.x+100 > event.mouseButton.x
        && byte->mv.y < event.mouseButton.y
        && byte->mv.y+100 > event.mouseButton.y) {
        byte->speedsai += 7;
        byte->score += 25;
        byte->mv.x = -148;
        byte->mv.y = random * 5 % 500;
    }
}

int checktouch(sfEvent event, init_graph_t *byte, long long random)
{
    corbactouch(event, byte, random);
    pentouch(event, byte, random);
    saitouch(event, byte, random);
}
