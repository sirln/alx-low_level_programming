#include <stdio.h>
#include "main.h"
#include "6-abs.c"

/**
 *print_to_98 - prints all natural numbers from n to 98,
 *		followed by a new line
 *
 *@s: parameter
 *
 *Return: returns last digit in s
 *
 */
void print_to_98(int s)
{
	int l;

	if (s > 98)
	{
		for (l = s; l >= 98; l--)
		{
			printf("%d", l);
			if (l != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (l = s; l <= 98; l++)
		{
			printf("%d", l);
			if (l != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
