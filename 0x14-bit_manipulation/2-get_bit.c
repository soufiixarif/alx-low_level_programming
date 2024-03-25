#include "main.h"

/**
 * get_bit - function that return binary value at indec
 * @n: number in question
 * @index: position of binary digit
 * Return: 0 or 1;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	n = n >> index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
