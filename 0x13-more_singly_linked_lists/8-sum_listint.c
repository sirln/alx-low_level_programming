#include "lists.h"

/**
  *sum_listint - returns sum of all data in list
  *
  *@head: pointer to head node in list
  *
  *Return: sum of data in list or  NULL
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
