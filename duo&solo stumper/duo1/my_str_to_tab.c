/*
** EPITECH PROJECT, 2020
** Oh Shit
** File description:
** here we go again
*/

#include "tail.h"

int height_str(char const *str)
{
  int i;
    for (; str[i] != '\0'; i++);
    return i;
}

char *const *str_to_word_tab(char const *str)
{
    int y = 0;
    int x = 0;
    int h = height_str(str);
    char **tab = malloc(sizeof(char *) * h);
    if (tab == NULL)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        tab[y][x] = str[i];
        x++;
        if (str[i] == '\n') {
            tab[y][x] = malloc(sizeof(char) * i);
            tab[y] = malloc(sizeof(char) * i);
            tab[y][x] = '\0';
            x = 0;
            y += 1;
        }
    }
    return (tab);
}
