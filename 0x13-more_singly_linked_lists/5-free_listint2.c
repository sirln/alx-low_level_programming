#include "lists.h"

/**
  *free_listint2 - frees a list
  *
  *@head: pointer to pointer to head node in list
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !(*head))
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
