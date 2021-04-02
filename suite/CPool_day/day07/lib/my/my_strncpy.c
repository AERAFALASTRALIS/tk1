/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    char i;
    
    if (i < n) {
    while (src [i] != '\0'){
        dest[i] = src [i];
        i++;
        n++;
    }
    return (dest);
    my_putchar('\n');
    } else if (i > n) {
    return (0);
    }
}
