#include "lists.h"

size_t listint_len(const listint_t *h)
{
    size_t counter;

    counter = 0;
    while (h)
    {
        counter++;
        h = h->next;
    }
    return (counter);
}
