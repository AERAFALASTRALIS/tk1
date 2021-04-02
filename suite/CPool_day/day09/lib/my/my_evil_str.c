/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_evil_str
*/

int p(char const *str)
{
    int i=0;
    while (str[i] != '\0')
    {
        i=i+1;
    }
    return (i);
}

void permut(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

char *my_evil_str(char *str)
{
    int i=0;
    int k = p(str) - 1;

    while (i < k)
    {
        permut(&str[i], &str[k]);
        i = i+1;
        k = k -1; 
    }
    return (str);
}
