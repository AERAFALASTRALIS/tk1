/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_putchar
*/

#include"my.h"

void my_putcharin(char c)
{
    write(1, &c, 1);
}
