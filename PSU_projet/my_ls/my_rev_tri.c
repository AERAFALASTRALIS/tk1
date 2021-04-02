/*
** EPITECH PROJECT, 2020
** revtri
** File description:
** revtri
*/

#include "my.h"
#include "structe.h"

list_t *tridec(list_t *spatium)
{
    list_t *past = spatium;
    list_t *now = spatium->next;
    char *temp;
    if (now == NULL)
        return (spatium);
    int b = my_strcmp(now->name, past->name);

    while (now != NULL) {
        if (my_strcmp(now->name, past->name) > 0) {
            temp = past->name;
            past->name = now->name;
            now->name = temp;
        }
        past = now;
        now = now->next;
    }
    return (spatium);
}

void my_rev_ls(DIR *my_dir)
{
    struct dirent *dirent = readdir(my_dir);
    list_t *spatium = NULL;

    while (dirent != NULL) {
        if ((dirent->d_name[0] != '.')) {
            my_put_list(&spatium, my_strdup(dirent->d_name));
            tridec(spatium);
        }
        dirent = readdir(my_dir);
    }
    check(spatium);
    free(spatium);
}

int my_rev_tri(char *av, int ac)
{
    if (ac != 2)
        return (84);
    char *str = "-r";
    int i = my_strcmp(av, str);
    if (i == 0) {
        my_rev_ls(opendir("./"));
        return (0);
    }
    return (0);
}

int my_h(char *av, int ac)
{
    if (ac != 2)
        return (84);
    char *str = "-h";
    int i = my_strcmp(av, str);
    if (i == 0) {
        my_putstrs("flag -1, -r");
        return (0);
    }
    return (0);
}
