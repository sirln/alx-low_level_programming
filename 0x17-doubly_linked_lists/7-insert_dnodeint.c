#include "lists.h"

/**
  *insert_dnodeint_at_index - insert new node at given index in list.
  *
  *@h: pointer to pointer to the head of the list
  *@idx: index in list to insert node
  *@n: node to insert
  *
  *Return: address of node we are searching for or NULL
  *
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int l = 0;
	dlistint_t *new_node, *current = *h;

	if (!(*h) && (idx > 0))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (l < (idx - 1) && current && current->next)
		{
			current = current->next;
			l++; }

		if (l == (idx - 1) || (l == idx && !current))
		{
			new_node->prev = current;
			new_node->next = current ? current->next : NULL;
			if (current)
				current->next = new_node;
			if (new_node->next)
				new_node->next->prev = new_node; }
		else
		{
			free(new_node);
			return (NULL);	} }
	return (new_node);
}
