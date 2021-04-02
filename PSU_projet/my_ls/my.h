/*
** EPITECH PROJECT, 2020
** structe
** File description:
** structe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_putstrs(char const *str);
int my_strlen(char const *str);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int colone(char *av, int ac);
int my_rev_tri(char *av, int ac);
int my_h(char *av, int ac);
