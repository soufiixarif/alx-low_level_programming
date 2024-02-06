#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node;
    listint_t *tmp;

    tmp = *head;
    node = malloc(sizeof(listint_t));
    if(!node)
        return (NULL);
    node->n = n;
    node->next = NULL;
    if (!*head)
        *head = node;
    else 
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
    return (node);
}
