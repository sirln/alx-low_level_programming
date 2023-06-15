#include "lists.h"

/**
  *dlistint_len - gets the number of elements in a list.
  *
  *@h: pointer to the head of the list
  *
  *Return: number of elements in a linked list
  *
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
