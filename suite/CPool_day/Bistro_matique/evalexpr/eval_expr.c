/*
** EPITECH PROJECT, 2019
** picine
** File description:
** eval_expr
*/

#include "../include/my.h"

int eval_expr(char const *str)
{
    char *dest;
       int i = 0;
    while (str[i] != '\0'){
        i++;
    if (str[i] == '*' || str[i] == '/' || str[i] == '%'){
    }
    if (str[i] == '(' && str[i] == ')'){
    }
    if (str[i] == '+' || str[i] == '-'){
    }
    }
}

int main(int ac, char **av)
{
if (ac == 2) {
my_put_nbr(eval_expr(av[1]));
my_putchar('\n');
return (0);
}
return (84);
}
