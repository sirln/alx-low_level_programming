#include "lists.h"

/**
  *print_dlistint - prints all the elements of a list.
  *
  *@h: pointer to the head of the list
  *
  *Return: number of elements in the list
  *
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
