#include "hash_tables.h"

/**
  *hash_table_create - creating a hash table
  *
  *@size: size of array
  *
  *Return: pointer to the newly created hash table
  *
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int l = 0;

	if (size <= 0)
	{
		return  (NULL);
	}

	my_hash_table = malloc(sizeof(hash_table_t));
	if (!my_hash_table)
		return (NULL);

	my_hash_table->size = size;
	my_hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (!(my_hash_table->array))
	{
		free(my_hash_table);
		return (NULL);
	}

	while (l < size)
	{
		my_hash_table->array[l] = NULL;
		l++;
	}

	return (my_hash_table);
}
