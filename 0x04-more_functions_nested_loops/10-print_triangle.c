#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: parameter
 *Return: returns nothing
 */
void print_triangle(int size)
{
	int l, s, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (s = size - n; s > 0; s--)
			{
				_putchar(' ');
			}
			for (l = 0; l < n; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
