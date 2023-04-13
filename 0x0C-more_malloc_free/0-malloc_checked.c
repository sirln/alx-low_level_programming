#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - creates an array of chars, and initializes
 *
 *@b: parameter
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *l;

	l = malloc(b);
	if (l == NULL)
		exit(98);
	return (l);
}
