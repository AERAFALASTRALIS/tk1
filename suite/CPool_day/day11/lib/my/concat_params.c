/*
** EPITECH PROJECT, 2019
** picine
** File description:
** concat_params
*/

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != NULL)
    {
        my_putchar(str[i]);
        i = i + 1;
    }
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    char *str;
    
    while (i != NULL) {
        my_putstr(argv[i]);
        my_putstr("\n");
        i++;
    }
    argv[i] = "\0";
    str =  malloc(sizeof(char) * i) - 1;
    return (str);
}

int main(int ac, char **av )
{
    my_putstr(concat_params(ac, av));
}
