#include <stdlib.h>
#include <stddef.h>
/**
 *_strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *
 *@str: parameter
 *Return: NULL or pointer to the array.
 */

char *_strdup(char *str)
{
	char *l;
	int n = 0;
	int s = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		n++;
	}

	l = malloc(sizeof(char) * (n + 1));

	if (l == NULL)
		return (NULL);

	while (s < n)
	{
		l[s] = str[s];
		s++;
	}

	return (l);
}
