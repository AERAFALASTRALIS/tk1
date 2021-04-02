/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** prototype
*/

#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>

int my_putchar(va_list ap);
void my_putcharin(char c);
int my_put_modulo(va_list ap);
int my_putstr(va_list ap);
int my_putstrin(char const *str);
int my_put_nbr(va_list ap);
void my_put_nbr2(int nb);
int my_put_u(va_list ap);
int my_put_nbr_base(long int nb, char const *base);
int my_put_x(va_list ap);
int my_put_x2(va_list ap);
int my_put_p(va_list ap);
int my_put_o(va_list ap);
int my_put_b(va_list ap);
int my_put_s2(va_list ap);
int my_strlen(char const *str);
