#include "lists.h"

/**
 * free_listint - function that free a list
 * @head: head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
