#include "lists.h"

/**
  *add_node - adds a new node at the beginning of a list.
  *
  *@head: list to be print
  *@str: string to be added
  *
  *Return: address of the new element or NULL
  *
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;
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
	lst->next = *head;
	*head = lst;

	return (lst);
}
