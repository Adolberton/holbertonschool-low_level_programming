#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: If an error occurs - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
