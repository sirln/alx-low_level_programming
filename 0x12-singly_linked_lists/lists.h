#ifndef LIST
#define LIST

#include <stdio.h>

/**
 * struct list_l - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_l
{
	char *str;
	unsigned int len;
	struct list_l *next;
} list_t;


size_t print_list(const list_t *h);

#endif
