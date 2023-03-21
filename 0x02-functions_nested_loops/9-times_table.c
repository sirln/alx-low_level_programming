#include  "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int  m, h;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
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
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
