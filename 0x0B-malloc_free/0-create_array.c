#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - creates an array of chars, and initializes
 *		it with a specific char.
 *@size: parameter
 *@c: parameter
 *Return: NULL or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *l;

	if (size == 0)
		return (NULL);

	l = malloc(sizeof(char) * size);

	if (l == NULL)
		return (NULL);

	while (size--)
	{
		l[size] = c;
	}

	return (l);
}
