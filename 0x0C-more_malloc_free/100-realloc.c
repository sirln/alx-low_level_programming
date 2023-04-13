#include <stdlib.h>
#include <stddef.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *
 *@ptr: parameter
 *@old_size: parameter
 *@new_size: parameter
 *
 *Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *l, *n;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n = malloc(new_size);

		if (n == NULL)
			return (NULL);

		return (n);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	l = ptr;
	n = malloc(sizeof(*l) * new_size);

	if (n == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (; x < old_size && x < new_size; x++)
		n[x] = *l++;

	free(ptr);
	return (n);
}
