#include "lists.h"

int pop_listint(listint_t **head)
{
    int nb;
    listint_t *tmp;

    if (!*head || !head)
        return (0);
    tmp = *head;
    nb = (*head)->n;
    *head = (*head)->next;
    free(tmp);
    return (nb);
}
