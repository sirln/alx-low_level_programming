#include <stdio.h>
/**
 *main -  program start point
 *
 *Return: print number stored in variable n
 *
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 9; m++)
	{
		for (n = 1; n < 10; n++)
		{
			if (m < n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
