#include "main.h"

/**
 * set_bit - function that set a bit at index
 * @n: number in question
 * @index: position to insert 1
 * Return: number with index added
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n = *n | (1 << index);
		return (1);
}
