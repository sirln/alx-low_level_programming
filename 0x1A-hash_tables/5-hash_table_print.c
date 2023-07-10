#include "hash_tables.h"

/**
  *hash_table_print - print a hash table
  *
  *@ht: hash table
  *
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0, l = 0;

	if (!ht || !(ht->array))
		return;

	printf("{");
	while (index < ht->size && ht->size[index])
	{
		node = ht->array[index];
		while (node)
		{
			if (l)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			l = 1;
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
