/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** my_sokoban
*/

#include "my.h"

void init(void)
{
    initscr();
    keypad(stdscr, TRUE);
    nonl();
    cbreak();
    echo();
}

int h(char *av, int ac)
{
    if (ac != 2)
        return (84);
    char *str = "-h";
    int i = my_strcmp(av, str);
    if (i == 0) {
        my_putstr("Bonjour Bienvenu\n vous vous trouver dans my_sokoban\n");
        my_putstr("le but du jeux est de placer les X dans les O\n");
        my_putstr("avec les fleche du pavé numerique\n");
        my_putstr("8 = haut, 4 = gauche, 6 = droite, 5 = bas\n");
    }
    return (0);
}

int main2(char **str2, char *str, int ac, int save)
{
    int *tab = my_find_p(str);
    int pox[3] = {0, 0, 0};

    if (compt(str, pox)) {
        endwin();
        return (84);
    }
    init();
    int	*pos = my_find_o(str, pox);
    while (ac == 2) {
        move(0, 0);
        printw(str);
        my_sokoban(str2, tab, save, pos);
        }
    frizeur(str, tab, str2, pox);
    free(pos);
    return (0);
}

int main(int ac, char **av)
{
    int n = 0;
    if (ac != 2)
        return (84);
    h(av[1], ac);
    int fd = fs_open_file(av[1]);
    if (fd == -1)
        return (84);
    long int full_len = 0;
    char *str = my_read(fd, &full_len);
    n = comptn(str);
    if (n == 84)
        return (84);
    char **str2 = my_run(str, full_len);
    if (str == NULL || str2 == NULL)
        return (84);
    int save = compto(str);
    main2(str2, str, ac, save);
    return (0);
}
