#include "main.h"

/**
 * print_binary - function that convert decimal number into binary
 * @n: number to convert
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
