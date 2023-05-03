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
	const listint_t *temp;

	if (!head || !(head->next))
		exit(98);

	while (head)
	{
		num_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);

		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (num_nodes);
}

