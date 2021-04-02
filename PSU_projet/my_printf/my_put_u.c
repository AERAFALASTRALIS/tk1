/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_put_nbr
*/

#include"my.h"

int my_put_u(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    if (nb < 0){
        my_putcharin(45);
        nb = nb * -1;
    }
    int i;
    if (nb >= 0){
        if (nb >= 10){
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_put_nbr2(nb);
            my_putcharin(48 + i);
        }
        else
            my_putcharin(48 + nb % 10);
    }
}
