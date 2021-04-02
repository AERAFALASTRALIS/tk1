/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_print_params
*/

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
    my_putchar(str[i]);
    i = i+1;
    }
}

int my_print_params(int argc, char **argv)
{
    int i = 0;
    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');   
        i++;
    }
    return (0);
}
