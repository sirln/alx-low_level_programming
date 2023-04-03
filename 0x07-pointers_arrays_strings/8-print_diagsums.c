#include  <stdio.h>
/**
 *print_diagsums -  prints the sum of the two
 *	 diagonals of a square matrix of integers
 *
 *@a: parameter
 *@size: parameter
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int l = 0;
	int t1 = 0;
	int t2 = 0;

	for (; l < size; l++)
	{
		t1 += a[l * size + l];
		t2 += a[l * size + (size - l - 1)];
	}

	printf("%d, %d\n", t1, t2);
}
