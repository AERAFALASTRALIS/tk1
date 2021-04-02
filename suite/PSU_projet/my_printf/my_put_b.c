/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** base du binaire
*/

#include"my.h"

int my_put_b(va_list ap)
{
    unsigned int nb = (unsigned int) va_arg(ap, int);
    my_put_nbr_base(nb, "01");
}
