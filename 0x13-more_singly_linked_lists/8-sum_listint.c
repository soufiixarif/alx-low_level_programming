#include "lists.h"

/**
 * sum_listint - function that sum all data together
 * @head: the head of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
