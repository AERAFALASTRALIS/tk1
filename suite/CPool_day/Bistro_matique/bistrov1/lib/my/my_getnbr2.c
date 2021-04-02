/*
** EPITECH PROJECT, 2019
** getnbr
** File description:
** nbr
*/

int my_getnbr2(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    return (0);
}
