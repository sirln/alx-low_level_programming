#include "hash_tables.h"

/**
  *hash_table_delete - delete a hash table
  *
  *@ht: hash table
  *
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			ht->array[index] = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = ht->array[index];
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
