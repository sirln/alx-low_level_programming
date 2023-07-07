#include "hash_tables.h"

/**
  *key_index - get index of a key
  *
  *@size: size of array
  *@key: key to search for in hash table
  *
  *Return: key index
  *
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
