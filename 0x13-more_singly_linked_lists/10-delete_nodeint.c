#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int counter, i = 0;
	listint_t *tmp, *node;

	counter = listint_len(*head);
	if (*head == NULL || index > counter)
		return (-1);
	if (*head == NULL && index != 0)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	if (index == counter)
	{
		while (tmp->next)
		{
			node = tmp;
			tmp = tmp->next;
		}
		node->next = NULL;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		node = tmp;
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;
	free(tmp);
	return (1);
}