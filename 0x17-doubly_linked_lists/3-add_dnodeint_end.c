#include "lists.h"

/**
  *add_dnodeint_end - adds a new node at the end of a doubly linked list.
  *
  *@head: pointer to pointer to the head of the list
  *@n: node to add to list
  *
  *Return: address of the added node or NULL
  *
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *temp;

	new_list = malloc(sizeof(dlistint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;
	if (!*head)
	{
		new_list->prev = NULL;
		*head = new_list;
		return (new_list);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_list;
	new_list->prev = temp;

	return (new_list);
}
