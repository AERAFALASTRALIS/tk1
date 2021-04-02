/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_rev_params
*/


int my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
    my_putchar(str[i]);
    i = i+1;
    }
}


int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc) {   
        i++;
    }
    
    while (i != 0) {
         my_putstr(argv[i-1]);
         my_putchar('\n');
         i--;
    }
    return (0);
}
