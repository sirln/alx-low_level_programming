#include <stdlib.h>
#include <stddef.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *
 *@nmemb: parameter
 *@size: parameter
 *
 *Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *l;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = malloc(nmemb * size);
	if (l == NULL)
		return (NULL);

	for (n = 0; n < nmemb * size; n++)
		l[n] = 0;

	return (l);
}
