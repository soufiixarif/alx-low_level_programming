#include "lists.h"

/**
 * add_nodeint - funtion that add a node in the beggining of a linked list
 * @head: the head of the linked list
 * @n: the value of data in the new created node
 * Return: a pointer to the new node o NULL
 */

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
