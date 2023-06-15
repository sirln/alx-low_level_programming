#include "lists.h"

/**
  *get_dnodeint_at_index - get node at given index in doubly linked list.
  *
  *@head: pointer to the head of the list
  *@index: index of node we looking for in list
  *
  *Return: address of node we are searching for or NULL
  *
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int l = 0;

	while (l < index && head)
	{
		head = head->next;
		l++;
	}

	if (l != index)
		return (NULL);

	return (head);
}
