#include "hash_tables.h"

/**
  *hash_table_set -  add an element to the hash table.
  *
  *@ht: hash table
  *@key: key to add to hash table
  *@value: value associated with the key
  *
  *Return: 1 on success, 0 on failure
  *
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *copy_value;

	if (!ht || !key || !value)
		return (0);

	copy_value = strdup(value);
	if (!copy_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = copy_value;
			return (1);
		}
		index++;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		free(copy_value);
		return (0);
	}
	node->value = copy_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
