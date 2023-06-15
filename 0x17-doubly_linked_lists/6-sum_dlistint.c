#include "lists.h"

/**
  *sum_dlistint - adds all the elements of a doubly linked list.
  *
  *@head: pointer to the head of the list
  *
  *Return: sum of data in the list
  *
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
