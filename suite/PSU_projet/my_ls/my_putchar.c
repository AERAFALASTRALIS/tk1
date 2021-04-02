/*
** EPITECH PROJECT, 2020
** putc
** File description:
** putc
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
