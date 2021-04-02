/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_printf
*/

#include"my.h"

int flalist(int (**flag)(va_list ap))
{
    flag['i'] = &my_put_nbr;
    flag['d'] = &my_put_nbr;
    flag['s'] = &my_putstr;
    flag['c'] = &my_putchar;
    flag['X'] = &my_put_x2;
    flag['x'] = &my_put_x;
    flag['o'] = &my_put_o;
    flag['b'] = &my_put_b;
    flag['p'] = &my_put_p;
    flag['S'] = &my_put_s2;
    flag['u'] = &my_put_u;
    flag['%'] = &my_put_modulo;
}

int my_printf(char const *str, ...)
{
    int i = 0;
    va_list ap;
    int (*flag[128])(va_list ap);

    flalist(flag);
    va_start(ap, str);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == '%'){
            i = i + 1;
            flag[str[i]](ap);
        } else
            my_putcharin(str[i]);
        if (str[i] == '\0') {
            write(2, "Ereur", 5);
        }
    }
    va_end(ap);
}
