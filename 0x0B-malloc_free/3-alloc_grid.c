#include <stdlib.h>
#include <stddef.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 *@width: parameter
 *@height: parameter
 *Return: NULL or pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int **l;
	int n, s, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	l = (int **)malloc(sizeof(int *) * height);
	if  (l == NULL)
		return (NULL);

	for (n  = 0; n < height; n++)
	{
		l[n] = (int *)malloc(sizeof(int) * width);
		if (l[n] == NULL)
		{
			for (s = 0; s < n; s++)
			{
				free(l[s]);
			}
			free(l);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			l[x][y] = 0;
		}
	}
	return (l);
}
