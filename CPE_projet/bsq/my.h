/*
** EPITECH PROJECT, 2019
** my_bsq
** File description:
** my_bsq
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_strlen(char const *str);
int my_strlenbis(char const *str);
char **my_run(char *str, long int n);
void my_putchar(char c);
char *my_strncpy(char *dest, char const *src, int len);
int my_check_square(int x, int y, int z, char **str2);
int my_bsq(int x, int y, int z, char **str2);
int *my_find_bsq(int max_x, int max_y, char **str2);
int fs_open_file(char const *filepath);
void my_cross(int *bsq_pos, char **str2);


#ifndef MY_H_
#define MY_H_

#define PACKAGE_SIZE 4000

typedef struct strchain {
    char *str;
    struct strchain *next;
} strchain_t;

char *my_read(const int fd, long int *full_len);

#endif /* MY_H_ */
