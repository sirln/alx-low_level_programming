#include "lists.h"

/**
  *print_listint_safe - prints a linked list
  *
  *@head: pointer to head node in list
  *
  *Return: number of nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *temp, *tmp;

	tmp = head
	while (tmp)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)tmp, tmp->n);

		temp = tmp;
		tmp = tmp->next;
		if (temp <= tmp)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			exit(98);
		}
	}
	return (num_nodes);
}

