/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_isneg
*/

int my_isneg(int n)
{
    if (n < 0){
        my_putchar(78);
    }
    else if (n >= 0){
        my_putchar(80);
    }
    return (0);
}
