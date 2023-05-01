#include "lists.h"

/**
  *get_nodeint_at_index - returns nth node of a list
  *
  *@head: pointer to head node in list
  *@index: element/node to be returned
  *
  *Return: nth node or  NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;

	while (l != index && head)
	{
		head = head->next;
		l++;
	}

	if (l != index)
		return (NULL);

	return (head);
}
