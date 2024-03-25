#include "main.h"

/**
 * get_endianness - function that check if a variable is endianness or not
 * Return: 0 if big 1 of little
 */

int get_endianness(void)
{
	char *p;
	unsigned int n;

	n = 0x01;
	p = (char *)&n;
	if (p[0] == 0x01)
		return (1);
	else
		return (0);
}
