#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node;
    list_t *tmp;

    node = malloc(sizeof(list_t));
    if(!node)
        return NULL;
    node->str = strdup(str);
    node->len = strlen(str);
    tmp = *head;
    if (!*head)
        *head = node;
    else
    {
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = node;
    } 
    return(node);
}
