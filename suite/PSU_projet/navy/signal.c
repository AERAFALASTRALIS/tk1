/*
** EPITECH PROJECT, 2020
** signal
** File description:
** signal
*/

#include "include/my.h"

void my_receive(void)
{
    data-> x = 0;
    data-> y = 0;
    data->compt = 0;
    data->receive = 0;
    data-> isend = 0;
    data->message = 0;
    while (data->isend == 0) {
        pause();
        data->compt++;
    }
}

void my_meme(void *dest, int val, int len)
{
    char *ptr = dest;
    while (len -- > 0)
        *ptr++ = val;
}

static void hdl_o(int sig, siginfo_t *siginfo, void *context)
{
    if (data->receive == 1)
        data->isend = 1;
    if (data->compt >= 3)
        data->x++;
    data->pid = siginfo->si_pid;
    data->message <<= 1;
}

static void hdl_t(int sig, siginfo_t *siginfo, void *context)
{
    if (data->compt >= 3) {
        data->receive  = 1;
        data->y++;
    }
    data->message = (data->message << 1) + 1;
}

int my_signal(int ac, char **av)
{
    struct sigaction act1;
    my_meme(&act1, '\0', sizeof(act1));
    act1.sa_sigaction = &hdl_o;
    act1.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &act1, NULL) < 0)
        return (1);
    struct sigaction act2;
    my_meme(&act2, '\0', sizeof(act2));
    act2.sa_sigaction = &hdl_t;
    act2.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR2, &act2, NULL) < 0)
        return (1);
    return (0);
}
