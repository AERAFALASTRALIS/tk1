/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my_ls
*/

#include "my.h"
#include "structe.h"

int check(list_t *spatium)
{
    list_t *past = spatium;
    list_t *now = spatium->next;

    while (now != NULL) {
        my_putstr(past->name);
        past = now;
        now = now->next;
    }
    my_putstrs(past->name);
    return (0);
}

list_t *tri(list_t *spatium)
{
    list_t *past = spatium;
    list_t *now = spatium->next;
    char *temp;
    if (now == NULL)
        return (spatium);
    int b = my_strcmp(now->name, past->name);

    while (now != NULL) {
        if (my_strcmp(now->name, past->name) < 0) {
            temp = past->name;
            past->name = now->name;
            now->name = temp;
        }
        past = now;
        now = now->next;
    }
    return (spatium);
}

void my_put_list(list_t **list, void *data)
{
    list_t *spatium;

    spatium = malloc(sizeof(list_t));
    spatium->name = data;
    spatium->next = *list;
    *list = spatium;
}

void my_solo_ls(DIR *my_dir)
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
    check(spatium);
    free(spatium);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        my_solo_ls(opendir("./"));
        return (0);
    }
    my_h(av[1], ac);
    my_rev_tri(av[1], ac);
    colone(av[1], ac);
    return (0);
}
