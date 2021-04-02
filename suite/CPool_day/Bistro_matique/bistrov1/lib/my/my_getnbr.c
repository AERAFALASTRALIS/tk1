/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_getnbr
*/

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
