#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: parameter
 * @size: parameter
 * Return: returns nothing
 */

void print_buffer(char *b, int size)
{
	int l, n, s;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		n = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (s = 0; s < 10; s++)
		{
			if (s < n)
				printf("%02x", *(b + l + s));
			else
				printf("  ");
			if (s % 2)
			{
				printf(" ");
			}
		}
		for (s = 0; s < n; s++)
		{
			int c = *(b + l + s);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		l += 10;
	}
}
