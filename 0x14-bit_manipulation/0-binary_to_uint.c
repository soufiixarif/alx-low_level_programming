#include "main.h"

/**
 * binary_to_uint - function that convert binary to decimal
 * @b: pointer to the binary number
 * Return: 0 or decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = ((n << 1) | (b[i] - '0'));
		i++;
	}
	return (n);
}
