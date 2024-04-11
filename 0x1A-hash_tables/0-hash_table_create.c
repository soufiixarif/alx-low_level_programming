#include "hash_tables.h"

/**
*hash_table_create - function creat table
* @table: the new table
* @i : index
* return: the new table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	i = 0;
	table = malloc(sizeof(hash_node_t));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
