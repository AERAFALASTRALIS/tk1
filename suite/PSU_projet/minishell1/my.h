/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(const char *str);
int my_strcmp(const char *s1, const char *s2);
char *my_getline(void);
char *my_strcat(char const *dest, char const *src);
void environement(char **env);
int compare(char *line, char **env, char **str2, char **str1);
int my_comptn(char *line);
int legal_line(char *line);
int my_acex(char **str2, char *line, char **env);
char *find_pwd(char **env);
void my_cd(char *line, char **env);


