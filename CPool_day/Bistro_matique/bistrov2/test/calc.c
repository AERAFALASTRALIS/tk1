/*
** EPITECH PROJECT, 2019
** picine
** File description:
** bistro
*/

#include <stdlib.h>
int addition_stone(char *nbL, char *nbR);
int mult_stone(char *nbL, char *nbR);
int sub_stone(char *nbL, char *nbR);
int modulo_stone(char *nbL, char *nbR);
int div_stone(char *ndL, char *nbR);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);

char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{
    char *str;
    int i = 0;
    
  while (str[i] != '\0'){
        i++;
    if (str[i] == '*' || str[i] == '/' || str[i] == '%'){
        mult_stone(char *nbL, char *nbR);
        div_stone(char *nbL, char *nbR);
        modulo_stone(char *nbL, char *nbR);

    }
    if (str[i] == '(' && str[i] == ')'){
    }
    if (str[i] == '+' || str[i] == '-'){
    }
    addition_stone(char *nbL, char *nbR);
    sub_stone(char *nbL, char *nbR);
    }
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr("syntax error");
        return (84);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr("error");
        return (84);
    }
    if (read(0, expr, size) != size) {
        my_putstr("error");
        return (84);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr("syntax error");
        return (84);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr("syntax error");
        return (84);
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
    my_putstr(eval_expr(av[1], av[2], expr, size));
    return (0);
}
