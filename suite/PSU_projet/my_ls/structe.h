/*
** EPITECH PROJECT, 2019
** structe
** File description:
** structe
*/

#include <unistd.h>
#include <stdlib.h>

typedef struct list {
    char *name;
    struct list *next;
} list_t;

list_t *tri(list_t *spatium);
list_t *tridec(list_t *spatium);
int checkc(list_t *spatium);
int check(list_t *spatium);
void my_colo_ls(DIR *my_dir);
void my_rev_ls(DIR *my_dir);
void my_put_list(list_t **list, void *data);
