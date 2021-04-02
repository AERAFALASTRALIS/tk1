/*
** EPITECH PROJECT, 2019
** 
** File description:
** my_put_nbr
*/
#include<unistd.h>
int my_put_nbr(int nb)
{
    int divi = 1;
    int comp = 0;
    int remo = 0;

    if (nb < 0) {
        my_putchar(45);
        nb = nb * -1;
    }
    while (nb > divi) {
        divi = divi * 10;
        comp = comp + 1;
    }
    divi = divi / 10;
    comp = comp - 1;
    while (comp >= 0) {
        remo = nb % divi;
        nb = nb / divi;
        my_putchar(nb + 48);
        divi = divi / 10;
        comp = comp - 1;
        nb = remo;
    }
}
