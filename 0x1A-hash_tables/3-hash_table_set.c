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
	hash_node_t *node, *prev_node = NULL;
	char *copy_value;

	if (!ht || !key || !value)
		return (0);

	copy_value = strdup(value);
	if (!copy_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = copy_value;
			return (1);
		}
		prev_node = node;
		node = node->next;
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
	if (prev_node)
		prev_node->next = node;
	ht->array[index] = node;
	return (1);
}
