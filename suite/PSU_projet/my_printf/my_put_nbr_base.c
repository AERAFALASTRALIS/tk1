/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** base
*/

#include"my.h"

int my_put_o(va_list ap)
{
    unsigned int nb = (unsigned int) va_arg(ap, int);
    my_put_nbr_base(nb, "01234567");
}

int my_put_x(va_list ap)
{
    unsigned int nb = (unsigned int) va_arg(ap, int);
    my_put_nbr_base(nb, "0123456789abcdef");
}

int my_put_x2(va_list ap)
{
    unsigned int nb = (unsigned int) va_arg(ap, int);
    my_put_nbr_base(nb, "0123456789ABCDEF");
}

int my_put_p(va_list ap)
{
    unsigned int nb = (unsigned int) va_arg(ap, int);
    my_putcharin('0');
    my_putcharin('x');
    my_put_nbr_base(nb, "0123456789abcdef");
}

int my_put_nbr_base(long int nb, char const *base)
{
    int i = 0;
    int cbase = my_strlen(base);
    if (nb > 0){
        if (nb >= cbase){
            i = (nb % cbase);
            nb = (nb) / cbase;
            my_put_nbr_base(nb, base);
            my_putcharin(base[i]);
        } else {
            my_putcharin(base[nb]);
        }
    }
}
