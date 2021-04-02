/*
** EPITECH PROJECT, 2019
** Mbabane premier  grade E
** File description:
** hallala
*/

#include "tail.h"

char *my_appendArray(char *buff, char c)
{
    int i = 0;
    char* newBuff = malloc(sizeof(char) * my_strlen(buff) + 2);
    if (newBuff == NULL)
        return (NULL);

    for (; buff[i] != '\0'; i++)
        newBuff[i] = buff[i];
    newBuff[i] = c;
    newBuff[i + 1] = '\0';
    return (newBuff);
}

int readLine(int fd, char *buff)
{
    int r = read(fd, buff, READ_SIZE);
    if (r == -1) {
        return (84);
}
    return (r);
}

char *get_next_line(const int fd)
{
    static int i = 0;
    static char buff [READ_SIZE];
    char* str;
    int size;
    while ((size = readLine(fd, buff)) > 0) {
        if (size == -1 || size == 0)
            return (NULL);
        for (; buff[i] != '\0'; i++) {
            str = my_appendArray(str, buff[i]);
        }
    }

    if (buff[0] == '\n')
        return (str);
    if (str == NULL)
        return (NULL);
    return (str);
}
