/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_put_nbr
*/

#include"my.h"

void my_put_nbr2(int nb)
{
    int i;
    if (nb > 0){
        if (nb >= 10){
            i = (nb % 10);
            nb = (nb) / 10;
            my_put_nbr2(nb);
            my_putcharin(48 + i);
        } else {
            my_putcharin(48 + nb);
        }
    }
}

int my_put_nbr(va_list ap)
{
    int nb = va_arg(ap, int);
    if (nb < 0){
        my_putcharin(45);
        nb = nb * -1;
    }
    my_put_nbr2(nb);
    my_putcharin('\n');
}
