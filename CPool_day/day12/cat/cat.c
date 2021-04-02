/*
** EPITECH PROJECT, 2019
** picine
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int s = 0;
    int v = 0;
    int i = 1;
    void *buf[30000];
    if (argc == 1)
    {
        while ( argc == 1) {
        s = read (0, buf, 30000);
        write (1, buf, s);
        }
    }
    while (i < argc) {
        v = open(argv[i], O_RDONLY);
        s = read (v, buf, 30000);
        write (1, buf,s);
        close (v);
        i++;
    }
}
