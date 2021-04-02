/*
** EPITECH PROJECT, 2020
** hmm la zone
** File description:
** .h file
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define READ_SIZE 4096

char *my_appendArray(char* buff, char c);
int readLine(int fd, char *buff);
char *get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H */

#ifndef TAIL_H_
#define TAIL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char *my_strcmpy(char *dest, char const *src, int n);
int my_strlen(const char *str);

#endif /* TAIL_H_ */
