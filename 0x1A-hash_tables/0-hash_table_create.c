#include "hash_tables.h"

/**
 * hash_table_create - function tahat create a hash table
 * @size: size of the array
 *
 * Return: the new created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);
	}

	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	new_table->size = size;
	return (new_table);
}

