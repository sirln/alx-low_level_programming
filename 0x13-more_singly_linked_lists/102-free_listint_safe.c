#include "lists.h"

/**
  *free_listint_safe - frees a linked list
  *
  *@h: pointer to pointer to head node in list
  *
  *Return: number of nodes
  */

size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listint_t *temp;

	if (!h)
		return (0);

	while (*h)
	{
		num_nodes++;
		temp = (*h)->next;

		if (temp >= *h)
		{
			free(*h);
			*h = NULL;
			exit(98);
		}
		free(*h);
		*h = temp;
	}
	return (num_nodes);
}

