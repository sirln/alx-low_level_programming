#include "lists.h"

/**
  *delete_nodeint_at_index - delete node at given index
  *
  *@head: pointer to pointer to head node in list
  *@index: index of node to be deleted
  *
  *Return: 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *node_del, *temp;

	if (!head || !(*head))
		return (-1);


	if (index == 0)
	{
		node_del = *head;
		*head = (*head)->next;
		free(node_del);
		return (1);
	}
	temp = *head;
	while (temp && l < index)
	{
		if (l == (index - 1))
		{
			node_del = temp->next;
			temp->next = node_del->next;
			free(node_del);
			return (1);
		}
		temp = temp->next;
		l++;
	}

	return (-1);
}
