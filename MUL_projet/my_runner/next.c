/*
** EPITECH PROJECT, 2019
** getnextline
** File description:
** getnextline
*/

#include "next.h"

static strchain_t *my_reader(const int door, long *all, char *box, int size)
{
    strchain_t *temp;
    strchain_t *chain;

    chain = malloc(sizeof(*chain));
    if (chain == NULL)
        return (NULL);
    temp = chain;
    chain->str = box;
    while (size == READ_SIZE) {
        box = malloc(READ_SIZE);
        size = read(door, box, READ_SIZE);
        temp->next = malloc(sizeof(*temp));
        if (temp->next == NULL)
            return (NULL);
        temp = temp->next;
        temp->str = box;
        *all += size;
    }
    return (chain);
}

static void my_extractor(strchain_t *chain, char *buffer, long int len)
{
    long int i = -1;
    strchain_t *temp;
    while (len > READ_SIZE) {
        while (++i < READ_SIZE)
            buffer[i] = chain->str[i];
        len -= READ_SIZE;
        buffer += READ_SIZE;
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
    char *box = malloc(READ_SIZE);

    if (box == NULL)
        return (NULL);
    int size = read(fd, box, READ_SIZE);
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

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i +1;
    }
    return (i);
}

char **my_run(char *str, long int full_len)
{
    int n = my_strlen(str);
    int j = 0;
    int i = 0;
    char **str2 = malloc(sizeof(char *) * n);

    while (i < n) {
        str2[i] = str + j;
        while (j < full_len && str[i] != '\n')
            j++;
        i++;
    }
    return (str2);
}
