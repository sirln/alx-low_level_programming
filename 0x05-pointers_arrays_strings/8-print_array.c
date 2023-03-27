#include "stdio.h"
/**
 *puts_half -  function that prints n elements of an array of integers,
 *	followed by a new line.
 *	`n` is the number of elements of the array to be printed
 *	Numbers are separated by comma, followed by a space
 *
 *@n: parameter
 *@a: pointer parameter
 */
void print_array(int *a, int n)
{
	int l;
	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if( l != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
