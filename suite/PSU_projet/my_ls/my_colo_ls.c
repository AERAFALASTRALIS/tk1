/*
** EPITECH PROJECT, 2020
** colo
** File description:
** colo
*/

#include "my.h"
#include "structe.h"

int my_putstrs(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i = i + 1;
    }
    my_putchar('\n');
    return (0);
}

int checkc(list_t *spatium)
{
    list_t *past = spatium;
    list_t *now = spatium->next;

    while (now != NULL) {
        my_putstrs(past->name);
        past = now;
        now = now->next;
    }
    my_putstrs(past->name);
    return (0);
}

void my_colo_ls(DIR *my_dir)
{
    struct dirent *dirent = readdir(my_dir);
    list_t *spatium = NULL;

    while (dirent != NULL) {
        if ((dirent->d_name[0] != '.')) {
            my_put_list(&spatium, my_strdup(dirent->d_name));
            tri(spatium);
        }
        dirent = readdir(my_dir);
    }
    checkc(spatium);
    free(spatium);
}

int colone(char *av, int ac)
{
    if (ac != 2)
        return (84);
    char *str = "-1";
    int i = my_strcmp(av, str);
    if (i == 0) {
        my_colo_ls(opendir("./"));
        return (0);
    }
    return (0);
}
