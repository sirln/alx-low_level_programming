#include "lists.h"

/**
  *add_nodeint_end - adds new node at the end of a list
  *
  *@head: pointer to pointer to head node in list
  *@n: element/node to be added
  *
  *Return: adderess of new node or  NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *h;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;

	if (!*head)
		return (*head = new_list);

	h = *head;
	while (h->next)
		h = h->next;
	h->next = new_list;
	return (new_list);
}
