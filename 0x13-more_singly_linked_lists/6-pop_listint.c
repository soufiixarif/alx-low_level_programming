#include "lists.h"

/**
 * pop_listint - function that delete first node and return the node's data
 * @head: the head of the list
 * Return: the data of the first node
 */

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
