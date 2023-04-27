#include "lists.h"

/**
  *print_list -  prints all the elements of a list.
  *
  *@h: pointer to the first node of the list
  *
  *Return: number of nodes;
  *
  */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
