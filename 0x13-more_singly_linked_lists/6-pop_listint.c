#include "lists.h"

/**
  *pop_listint - deletes head node of a list
  *
  *@head: pointer to pointer to head node in list
  *
  *Return: head node's data (n).
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
