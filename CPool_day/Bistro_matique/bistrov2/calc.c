/*
** EPITECH PROJECT, 2019
** picine
** File description:
** bistro bis
*/

#include<stdlib.h>
#include<unistd.h>
#include"./include/my.h"
#include"myi.h"
/*
char *memory(char *nbL, char *nbR)
{
    int length = my_strlen(nbL) + my_strlen(nbR) + 2;
    char *memAlloc = malloc(sizeof(char) * length);
    for (int index = 0; index < length; index++)
        memAlloc[index] = 0;
    return (memAlloc);
}

char *swapy(char *str)
{
    int index = 0;
    int endWord = my_strlen(str) - 1;
    char buffer;

    for (index = 0; index < my_strlen(str) / 2; index++, endWord--){
        buffer = str[endWord];
        str[endWord] = str[index];
        str[index] = buffer;
    }
    return (str);
}
*/
int neg(char *nbL, char *nbR)
{
    if (nbL[0] == '-' && nbR[0] == '-'){
        my_putchar('-');
        return (0);
    }
    if (abs(my_getnbr(nbL)) == abs(my_getnbr(nbR)))
        my_putchar('0');
    return (0);
}

int detection(char *nbL, char *nbR)
{
 char *str;
    int i = 0;

  while (str[i] != '\0'){
        i++;
        if (str[i] == '*'){
            mult_stone(nbL, nbR);
            my_put_nbr(mult_stone(nbL, nbR));
                  }
        if (str[i] == '/'){
            div_stone(nbL, nbR);
            my_put_nbr(div_stone(nbL, nbR));
                      }
        if (str[i] == '%'){
            modulo_stone(nbL, nbR);
            my_put_nbr(modulo_stone(nbL, nbR));
                      }
        if (str[i] == '+'){
            addition_stone(nbL, nbR);
            my_put_nbr(addition_stone(nbL, nbR));
                      }
        if (str[i] == '-'){
            sub_stone(nbL, nbR);
            my_put_nbr(sub_stone(nbL, nbR));
        }
  }
}

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (av[1][0] == '-' || av[2][0] == '-')
        neg(av[1], av[2]);
    else
        detection(av[1], av[2]);
    my_putchar('\n');
    return (0);
}
