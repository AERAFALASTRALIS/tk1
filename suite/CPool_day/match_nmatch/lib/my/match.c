/*
** EPITECH PROJECT, 2019
** picine
** File description:
** match
*/

#include<stdlib.h>
#include<unistd.h>
int stars(char const *s2)
{
    int i = 0;
    while (s2[i] != '\0'){
        i++;
    if (s2[i] == '*'){
        write(1, "\") returned 1\n", 13);
        return (1);
    }
    }
}

int match(char const *s1, char const *s2)
{
    write(1, "match(\"", 7);
    my_putstr(s1);
    write(1, "\", \"" , 4);
    my_putstr(s2);
    stars(s2);
    if (*s1 != *s2){
        write(2, "\") returned 0\n", 13);
        return (0);
    }
    if (*s1 == *s2){
        write(1, "\") returned 1\n", 14);
        return (1);
    }
}
