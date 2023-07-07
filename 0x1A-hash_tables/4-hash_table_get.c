#include "hash_tables.h"

/**
  *hash_table_get - retrieve a value associated with a key
  *
  *@ht: hash table
  *@key: key to used to get value
  *
  *Return: value associated with the key or NULL
  *
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
	{
		return  (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (!(ht->array[index]))
		return (NULL);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
