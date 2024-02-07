#include "lists.h"

/**
 * get_nodeint_at_index - function that return a node at a specific  index
 * @head: the head of the linked list
 * @index: number of the node
 * Return: pointer to the node at the index i
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	i = 0;
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
