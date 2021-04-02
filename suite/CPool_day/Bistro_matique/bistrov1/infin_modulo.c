/*
** EPITECH PROJECT, 2019
** main of infinadd
** File description:
** modulo inf
*/

#include<stdlib.h>
#include<unistd.h>
#include"../include/my.h"

char *memory2(int length)
{
    char *c = malloc(sizeof(char) * length);
    for (int t = 0; t < length; t++)
        c[t] = 0;
    return (c);
}

char *swapy2(char *str)
{
    int word = 0;
    int wordend = my_strlen(str) - 1;
    char save;

    for (word = 0; word < my_strlen(str) / 2; word++, wordend--){
        save = str[wordend];
        str[wordend] = str[word];
        str[word] = save;
    }
    return (str);
}

int modulo_stone(char *nbL, unsigned int ulnbL, char *nbR, unsigned int uLnbR)
{
    long int lnbL = (long int)ulnbL;
    long int LnbR = (long int)uLnbR;
    int t = 0;
    int SavenbL = 0;
    int SavenbR = 0;
    int keep = 0;
    char *result = memory2(lnbL + LnbR + 2);
    for (;lnbL >= 0 || LnbR >= 0 || keep != 0; lnbL--, LnbR--, t++){
        SavenbL = (lnbL >= 0) ? my_getnbr2(nbL[lnbL]) : 0;
        SavenbR = (LnbR >= 0) ? my_getnbr2(nbR[LnbR]) : 0;
        result[t] = ((SavenbL % SavenbR + keep) % 10) + '0';
        keep = ((SavenbL % SavenbR + keep) / 10);
    }
    result = swapy2(result);
    while (*result == '0')
        result++;
    my_putstr(result);
    free(result);
    return (0);
}
