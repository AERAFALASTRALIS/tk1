/*
** EPITECH PROJECT, 2019
** main of infinadd
** File description:
** sub inf
*/
#include<stdlib.h>
#include<unistd.h>
#include"../include/my.h"

char *memory5(char *nbL, char *nbR)
{
    int length = my_strlen(nbL) + my_strlen(nbR) + 2;
    char *memAlloc = malloc(sizeof(char) * length);
    for (int index = 0; index < length; index++)
        memAlloc[index] = 0;
    return (memAlloc);
}

char *swapy5(char *str)
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

int negsub(char *nbL, char *nbR)
{
    if (nbL[0] == '-' && nbR[0] == '-'){
        my_putchar('-');
        sub_stone(nbL, nbR);
        return (0);
    }
    if (abs(my_getnbr(nbL)) == abs(my_getnbr(nbR)))
        my_putchar("49");
    return (0);
}

int sub_stone(char *nbL, char *nbR)
{
    int index = 0;
    int lnbL = my_strlen(nbL) - 1;
    int lnbR = my_strlen(nbR) - 1;
    int buffernbL = 0;
    int buffernbR = 0;
    int holdIn = 0;
    char *result = memory5(nbL, nbR);
    for (;lnbL >= 0 || lnbR >= 0 || holdIn != 0; lnbL--, lnbR--, index++){
        buffernbL = (lnbL >= 0) ? my_getnbr2(nbL[lnbL]) : 0;
        buffernbR = (lnbR >= 0) ? my_getnbr2(nbR[lnbR]) : 0;
        result[index] = ((buffernbL - buffernbR - holdIn) % 10) + 48;
        holdIn = ((buffernbL - buffernbR - holdIn) / 10);
    }
    result = swapy5(result);
    while (*result == '0')
        result++;
    my_putstr(result);
    return (0);
}
