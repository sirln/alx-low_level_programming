#include  "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: parameter to return
 */
void print_times_table(int n)
{
	int  m, h;

	if (n <= 15 && n >= 0)
	{
		for (h = 0; h <= n; h++)
		{
			for (m = 0; m <= n; m++)
			{
				int product = h * m;

				if (m == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}

			} _putchar('\n'); 
		}
	}
}
