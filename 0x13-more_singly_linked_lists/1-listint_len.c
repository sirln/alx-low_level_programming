#include "lists.h"

/**
  *listint_len - returns number of elements in a list
  *
  *@h: pointer to head node in list
  *
  *Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
