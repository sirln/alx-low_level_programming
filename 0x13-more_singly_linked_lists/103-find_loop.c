#include "lists.h"

/**
  *find_listint_loop - finds loop in a linked list
  *
  *@head: pointer to head of list
  *
  *Return: address of where the loop starts or NULL
  *
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *tmp;

	temp = head;
	tmp = head;
	while (temp && temp->next)
	{
		tmp = tmp->next;
 		temp = temp->next->next;
		if (tmp == temp)
		{
			tmp = head;
			while (tmp != temp)
			{
				tmp = tmp->next;
				temp = temp->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
