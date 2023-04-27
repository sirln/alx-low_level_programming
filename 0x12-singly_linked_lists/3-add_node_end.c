#include "lists.h"

/**
  *add_node_end - adds a new node to the end of a list.
  *
  *@head: address of the head pointer
  *@str: string to be added
  *
  *Return: address of the new element or NULL
  *
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst, *first;
	int l = 0, n = 0;

	while (str[l])
		l++;

	lst = malloc(sizeof(list_t));
	if (!lst)
		return (NULL);

	/*lst->str = strdup(str);*/
	lst->str = malloc(sizeof(char) * (l + 1));
	if (!lst->str)
	{
		free(lst);
		return (NULL);
	}
	while (n < l)
	{
		lst->str[n] = str[n];
		n++;
	}
	lst->str[l] = '\0';
	lst->len = l;
	lst->next = NULL;

	if (!*head)
	{
		*head = lst;
		return (lst);
	}
	else
	{
		first = *head;
		while (first->next)
			first = first->next;
		first->next = lst;
		return (lst);
	}
}
