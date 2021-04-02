/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int  nb)
{
    int n = 0;
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[n] != '\0' && n < nb) {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}
