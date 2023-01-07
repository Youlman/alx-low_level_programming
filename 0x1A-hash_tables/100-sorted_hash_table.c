#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - function that create a sorted hash table
 * @size: size of the array
 *
 * Return: the new created hash table or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);
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
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}


/**
 * shash_table_set - Function that adds an element to a sorted hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value assoociated with the key
 *
 * Return: 1 or 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn, *tmp;
	char *value_cpy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cpy;
			return (1);
		}
	}

	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
	{
		free(value_cpy);
		return (0);
	}
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(value_cpy);
		free(hn);
		return (0);
	}
	hn->value = value_cpy;
	hn->next = ht->array[index];
	ht->array[index] = hn;

	if (ht->shead == NULL)
	{
		hn->sprev = NULL;
		hn->snext = NULL;
		ht->shead = hn;
		ht->stail = hn;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		hn->sprev = NULL;
		hn->snext = ht->shead;
		ht->shead->sprev = hn;
		ht->shead = hn;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		hn->sprev = tmp;
		hn->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = hn;
		else
			tmp->snext->sprev = hn;
		tmp->snext = hn;
	}

	return (1);
}



/**
 * shash_table_get - Retrieve the value associated with
 *                  a key in a sorted hash table.
 * @ht: the hash table.
 * @key: The key.
 *
 * Return: If the key cannot be found - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
