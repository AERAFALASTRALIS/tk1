/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int n = 0;
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[n] != '\0') {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}
