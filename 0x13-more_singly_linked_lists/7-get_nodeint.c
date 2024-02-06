#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
	listint_t *tmp;

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
