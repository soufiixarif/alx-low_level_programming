#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t counter;

    counter = 0;
    while (h)
    {
        printf("%d\n",h->n);
        h = h->next;
        counter++;
    }
    return (counter);
}
