/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_strdup
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i +1;
    }
    return (i);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src [i] != '\0')
    {
        dest[i] = src [i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    char *str;
    int i = my_strlen(src) +1;
    
    str = malloc(sizeof(char) * i);
    my_strcpy(str, src);
    return (str);
}
