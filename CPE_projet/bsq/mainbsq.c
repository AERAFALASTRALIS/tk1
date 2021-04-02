/*
** EPITECH PROJECT, 2019
** main my_bsq
** File description:
** main my_bsq
*/

#include"my.h"

int my_bsq(int x, int y, int z, char **str2)
{
    int check = 1;

    while (check == 1) {
        z++;
        check = my_check_square(x, y, z, str2);
    }
    return (z - 1);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    int fd = fs_open_file(av[1]);
    if (fd == -1)
        return (84);
    char buf[1];
    while (read(fd, buf, 1) == 1 && buf[0] != '\n');
    long int full_len = 0;
    char *str = my_read(fd, &full_len);
    if (str == NULL)
        return (84);
    int max_x = my_strlen(str);
    int max_y = my_strlenbis(str);
    char **str2 = my_run(str, full_len);
    int *bsq_pos = my_find_bsq(max_x, max_y, str2);

    my_cross(bsq_pos, str2);
    write(1, str, full_len);
    free(str);
    close(fd);
    return (0);
}



