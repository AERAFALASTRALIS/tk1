/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it (int nb)
{
    int w = 0;
    w = nb;
    if (nb == 0)
    {
        return (1);
    } if (nb < 0) {
        return (0);
    }if (nb > 12){
        return (12);
    } while (w != 1) {
        nb = nb -1;
        w  = w * nb;
    }
        return (w);
}
