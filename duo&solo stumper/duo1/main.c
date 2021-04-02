/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "tail.h"

int my_strlen(const char* str)
{
  int i = 0;
  for (; str[i] != NULL; i++);
  return (i);
}

int main(int ac, char **av)
{
    int i = 0;
    int fd = open(av[i], O_RDONLY);
    if (fd == -1)
        return 84;
    char *str = read(fd, &str, my_strlen(str));
    if (str == NULL)
        return (84);
    //   return (84);
    tail(str, fd);
    return (0);
}

int tail(char const *file, int fd)
{
  //int len = my_strlen(file) - 10;
    char *newstr = my_strncpy(newstr, file, 10);
    while (newstr) {
      get_next_line(fd);
    }   
    return (0);
}
