#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
