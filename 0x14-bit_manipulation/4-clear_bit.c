#include "main.h"

/**
 * clear_bit - function that delete a bit in a specific position
 * @n: number in question
 * @index: position where to set the bit to 0
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
