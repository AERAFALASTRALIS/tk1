/*
** EPITECH PROJECT, 2019
** picine
** File description:
** tree
*/

void f(size)
{
    my_putchar (' ');
    my_putchar (' ');
    my_putchar (' ');
    my_putchar ('*');
    size = size +2;
    my_putchar('\n');
}

void s(size)
{
    my_putchar (' ');
    my_putchar (' ');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    size = size +2;
    my_putchar ('\n');
}

void t(size)
{
    my_putchar (' ');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    size = size +2;
    my_putchar ('\n');
}

void q(size)
{
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    my_putchar ('*');
    size = size +2;
    my_putchar ('\n');
    
}

void tree (int size)
{
    if (size == 1) {
        f(size);
        s(size);
        t(size);
        q(size);
    my_putchar (' ');
    my_putchar (' ');
    my_putchar (' ');
    my_putchar ('|');
    size = size +2;
    my_putchar('\n');
    }
}
