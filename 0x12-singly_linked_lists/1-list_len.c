#include "lists.h"

/**
  *list_len -  returns the number of elements
  *		in a linked list.
  *
  *@h: list go through
  *
  *Return: number of elements;
  *
  */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
