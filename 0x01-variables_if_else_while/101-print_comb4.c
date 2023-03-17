#include <stdio.h>
/**
 *main -  program start point
 *
 *Return: print number stored in variable n
 *
 */
int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			for (o = 0; o < 10; o++)
			{
				if (m < n && n < o)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m != 7 || n != 8 || o != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
