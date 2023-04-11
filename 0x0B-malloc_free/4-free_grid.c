#include <stdlib.h>
#include <stddef.h>
/**
 *free_grid -  frees a 2 dimensional grid previously
 *		created by your alloc_grid function
 *
 *@grid: parameter
 *@height: parameter
 *Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	while (h < height)
	{
		free(grid[h]);
	}

	free(grid);
}
