#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node in idx position
 * @head: the head of the linked list
 * @idx: the position desired to insert a new node
 * @n: data of the node
 * Return: a pointer to the new created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int c, i = 0;

	c = listint_len(*head);
	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx > c)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tmp = *head;
	if (idx == 0 || tmp == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	if (idx == c)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		node->next = NULL;
		tmp->next = node;
		return (node);
	}
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
