#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value assoociated with the key
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	char *value_cpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
	{
		free(value_cpy);
		return (0);
	}
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn);
		return (0);
	}
	hn->value = value_cpy;
	hn->next = ht->array[index];
	ht->array[index] = hn;

	return (1);
}
