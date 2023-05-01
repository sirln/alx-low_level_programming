#include "lists.h"

/**
  *add_nodeint - adds new node at start of a list
  *
  *@head: pointer to pointer to head node in list
  *@n: element/node to be added
  *
  *Return: adderess of new node or  NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
