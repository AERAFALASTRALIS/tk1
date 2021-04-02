/*
** EPITECH PROJECT, 2019
** YANNIS STEFANELLI
** File description:
** calc
*/

#include<stdlib.h>
#include<unistd.h>
#include"./include/my.h"
#include"myi.h"

int scan(char *str, unsigned int len)
{
    int i = 0;

    while (i < len - 1){
        if (str[i] == '(' || str[i] == ')')
            exit(0);
        if (str[i] == '*')
            mult_stone(str, i - 1, str + i + 1, len - i - 2);
        if (str[i] == '/')
            div_stone(str, i - 1, str + i + 1, len - i - 2);
        if (str[i] == '%')
            modulo_stone(str, i - 1, str + i + 1, len - i - 2);
        if (str[i] == '+')
            addition_stone(str, i - 1, str + i + 1, len - i - 2);
        if (str[i] == '-')
            sub_stone(str, i - 1, str + i + 1, len - i - 2);
        i++;
    }
    return (len);
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr("syntax error");
        exit(84);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr("error");
        exit(84);
    }
    if (read(0, expr, size) != size) {
        my_putstr("error");
        exit(84);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr("syntax error");
        exit(84);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr("syntax error");
        exit(84);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (84);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    scan(expr, size);
    my_putchar('\n');
    free(expr);
    return (0);
}
