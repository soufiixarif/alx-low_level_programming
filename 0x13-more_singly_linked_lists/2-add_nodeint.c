#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *node;

    node = malloc(sizeof(listint_t));
    if(!node)
        return (NULL);
    if (!head)
        return (NULL);
    node->n = n;
    node->next = *head;
    *head = node;
    return (node);
}
