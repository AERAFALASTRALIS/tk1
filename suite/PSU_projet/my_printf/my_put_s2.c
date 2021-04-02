/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** base S
*/

#include"my.h"

void my_put_s2afteur(int i, char *str)
{
    if (str[i] < 8 && str[i] > 0)
        write(1, "0", 1);

    if (str[i] == 0){
        write(1, "0", 1);
        write(1, "0", 1);
    }
}

int my_put_s2(va_list ap)
{
    char *str = va_arg(ap, char *);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] > 31 && str[i] < 127){
            my_putcharin(i);
        }
        if (str[i] < 32){
            my_putcharin('\\');
            write(1, "0", 1);
            my_put_s2afteur(i, str);
            my_put_nbr_base((unsigned char)str[i], "01234567");
        }
        if (str[i] == 127){
            write(1, "\\177", 4);
        }
    }
}
