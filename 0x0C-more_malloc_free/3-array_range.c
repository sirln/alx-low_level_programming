#include <stdlib.h>
#include <stddef.h>
/**
 *array_range - creates an array of integers
 *
 *@min: parameter
 *@max: parameter
 *
 *Return: pointer to new array or NULL
 */

int *array_range(int min, int max)
{
	int l = 0, s, x = 0;
	int *n;

	if (min > max)
		return (NULL);

	for (s = min; s <= max; s++)
		l++;

	n = malloc(sizeof(int) * l);
	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
		n[x] = min;
		x++;
		min++;
	}

	return (n);
}
