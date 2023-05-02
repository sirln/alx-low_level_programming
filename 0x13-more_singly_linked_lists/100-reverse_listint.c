#include "lists.h"

/**
  *reverse_listint - reverse a linked list
  *
  *@head: pointer to pointer to first node in the list
  *
  *Return: pointer to the first node
  *
  */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new_node;

	if (!head || !(*head))
		return (NULL);
	new_node = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = new_node;
		new_node = *head;
		*head = temp;
	}
	*head = new_node;

	return (*head);
}
