/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_str_to_word_array
*/


int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i+1;
    }
}

int my_show_word_array(char *const *tab)
{
    int i = 0; 
    while (tab[i] != '\0') {
        my_putstr(tab[i]);
        my_putstr("\n");
        i++;
    }
    return (0);
}

char **my_str_to_word_array(char const *str)
{
    
