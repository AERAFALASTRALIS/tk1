/*
** EPITECH PROJECT, 2019
** CPE_BSQ_bootstrap
** File description:
** my_read.c
*/

#include "my.h"

strchain_t *my_reader(const int door, long *all, char *box, int size)
{
    strchain_t *temp;
    strchain_t *chain;

    chain = malloc(sizeof(*chain));
    if (chain == NULL)
        return (NULL);
    temp = chain;
    chain->str = box;
    while (size == PACKAGE_SIZE) {
        box = malloc(PACKAGE_SIZE);
        size = read(door, box, PACKAGE_SIZE);
        temp->next = malloc(sizeof(*temp));
        if (temp->next == NULL)
            return (NULL);
        temp = temp->next;
        temp->str = box;
        *all += size;
    }
    return (chain);
}

void my_extractor(strchain_t *chain, char *buffer, long int len)
{
    long int i = -1;

    strchain_t *temp;
    while (len > PACKAGE_SIZE) {
        while (++i < PACKAGE_SIZE)
            buffer[i] = chain->str[i];
        len -= PACKAGE_SIZE;
        buffer += PACKAGE_SIZE;
        temp = chain->next;
        free(chain->str);
        free(chain);
        chain = temp;
        i = -1;
    }
    while (++i < len)
        buffer[i] = chain->str[i];
    free(chain->str);
    free(chain);
}

char *my_read(const int fd, long int *full_len)
{
    char *box = malloc(PACKAGE_SIZE);

    if (box == NULL)
        return (NULL);
    int size = read(fd, box, PACKAGE_SIZE);
    if (size == -1)
        return (NULL);
    *full_len = size;
    strchain_t *chain = my_reader(fd, full_len, box, size);
    if (chain == NULL)
        return (NULL);
    char *buffer = malloc(*full_len + 1);
    if (buffer == NULL)
        return (NULL);
    my_extractor(chain, buffer, *full_len);
    buffer[*full_len] = '\0';
    return (buffer);
}
