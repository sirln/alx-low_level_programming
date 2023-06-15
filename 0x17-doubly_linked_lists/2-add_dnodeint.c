#include "lists.h"

/**
  *add_dnodeint - adds a new node at the beginning of a list.
  *
  *@head: pointer to pointer to the head of the list
  *@n: node to add to list
  *
  *Return: address of the node or NULL
  *
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;

	new_list = malloc(sizeof(dlistint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
