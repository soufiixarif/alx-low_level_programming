#include <stdlib.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int array;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (min <= max)
	{
		p[array] = min;
		min++;
		array++;
	}
	return (p);
}