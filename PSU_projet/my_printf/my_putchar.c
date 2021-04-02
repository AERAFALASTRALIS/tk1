/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_putchar
*/

#include"my.h"

int my_putchar(va_list ap)
{
    char c = (char)va_arg(ap, int);
    write(1, &c, 1);
}

int my_put_modulo(va_list ap)
{
    char c = (char) va_arg(ap, int);
    write(1, "%", 1);
}
