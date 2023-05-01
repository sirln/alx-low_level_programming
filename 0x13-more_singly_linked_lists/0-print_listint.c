#include "lists.h"

/**
  *print_listint - prints all elements of a list
  *
  *@h: pointer to head node in list
  *
  *Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
