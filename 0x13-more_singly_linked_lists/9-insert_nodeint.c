#include "lists.h"

/**
  *insert_nodeint_at_index - insert a new node to list
  *
  *@head: pointer to pointer to head node in list
  *@idx: the point where a new node will be added
  *@n: node to be inserted
  *
  *Return: address of new node or  NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l = 0;
	listint_t *new_list, *temp;

	if (!head || !(*head))
		return (NULL);


	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return	(NULL);

	new_list->n = n;
	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}
	temp = *head;
	while (temp && l < idx)
	{
		if (l == (idx - 1))
		{
			new_list->next = temp->next;
			temp->next = new_list;
			return (new_list);
		}
		else
			temp = temp->next;
		l++;
	}

	return (NULL);
}
