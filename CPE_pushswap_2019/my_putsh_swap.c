/*
** EPITECH PROJECT, 2019
** swap
** File description:
** swap
*/

#include "structe.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int i = 0;
    int signe = 1;

    while (str[i]) {
        if (str[i] == '-')
            signe = signe * -1;
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb*10+str[i] - 48;
            if (str[i+1] < 48 || str[i+1] > 57)
                return (nb * signe);
        }
        i++;
    }
    return (nb*signe);
}

void my_put_in_list(list_t **list, void *data)
{
    list_t *spatium;

    spatium = malloc(sizeof(list_t));
    spatium->nb = my_getnbr(data);
    spatium->next = *list;
    *list = spatium;
}

list_t *my_params_to_list(int ac, char **av)
{
    list_t *spatium;
    int i = 0;

    spatium = NULL;
    while (ac > 1) {
        ac--;
        my_put_in_list(&spatium, av[ac]);
    }
    return (spatium);
}

list_t *tri(list_t *spatium, int my_bool)
{
    list_t *past = spatium;
    list_t *now = spatium->next;
    int temp;

    while (now != NULL) {
        if (now->nb < past->nb) {
            temp = past->nb;
            past->nb = now->nb;
            now->nb = temp;
            write(1, "sa ", 3);
        }
        past = now;
        now = now->next;
        write(1, "ra ", 3);
    }
    write(1, "ra ", 3 - my_bool);
    return (spatium);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    list_t *spatium;
    int i = 0;
    int chek = 0;
    spatium = my_params_to_list(ac, av);
    chek = check(spatium);
    if (chek == 0)
        return (0);

    while (i < ac) {
        i++;
        tri(spatium, (i == ac));
    }
    write(1, "\n", 1);
    free(spatium);
    return (0);
}
