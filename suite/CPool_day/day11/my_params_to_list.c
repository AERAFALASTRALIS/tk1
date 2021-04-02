/*
** EPITECH PROJECT, 2019
** picine
** File description:
** my_params_to_list
*/

typedef struct linked_list
{
void *data;
struct linked_list *next;
} linked_list_t;

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *new = NULL;

    for(int comp = 0; comp < ac; comp++)
    {
        linked_list_t *ret = malloc(sizeof(linked_list_t));
        
        ret->next=new;
        ret->data=av[comp];
        new = ret;
    } 
    return (new);
} 
        

       
