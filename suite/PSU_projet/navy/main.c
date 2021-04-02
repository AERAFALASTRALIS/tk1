/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "include/my.h"

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     first_player_pid: only for the 2nd player.");
    my_putstr("  pid of the player.\n");
    my_putstr("     navy_positions: file representing the positions");
    my_putstr(" of the ships.\n");
}

void argument(void)
{
    my_putstr("second argument required\n");
    my_putstr("do ./navy -h for more information\n");
}

int launch_game(int ac, char **av)
{
    char **map_p1 = make_map();
    char **map_p2 = make_map();
    if (ac == 2) {
        if (my_read(map_p1, av[1]))
            return (84);
        my_get_pid_one();
        my_receive();
        my_putstr("\nenemy connected\n\n");
        while (game_one(map_p1, map_p2));
    }
    if (ac == 3) {
        if (my_read(map_p1, av[2]))
            return (84);
        data->pid = my_atoi(av[1]);
        my_send(CONNECTION, 1, 1);
        while (game_two(map_p1, map_p2));
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1 || ac > 3) {
        argument();
        return (84);
    } else if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    my_signal(ac, av);
    if ((launch_game(ac, av)) == 84)
        return (84);
    return (0);
}
