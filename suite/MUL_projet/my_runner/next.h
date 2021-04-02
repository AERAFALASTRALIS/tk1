/*
** EPITECH PROJECT, 2019
** my_runeur
** File description:
** my_runeur
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef NEXT_H_
#define NEXT_H_

#ifndef READ_SIZE
#define READ_SIZE 4000
#endif /* READ_SIZE */

typedef struct strchain {
    char *str;
    struct strchain *next;
} strchain_t;

char *my_read(const int port, long int *full_len);
int my_strlen(char const *str);
char **my_run(char *str, long int full_len);

#endif /* NEXT_H_ */
