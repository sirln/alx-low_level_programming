#include "lists.h"

/**
  *delete_dnodeint_at_index - delete node at given index in list.
  *
  *@head: pointer to pointer to the head of the list
  *@index: index in list to insert node
  *
  *Return: 1 on success or -1 on failure
  *
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int l = 0;
	dlistint_t *current = *head;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (l < index && current)
	{
		current = current->next;
		l++;
	}

	if (!current)
		return (-1);

	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
