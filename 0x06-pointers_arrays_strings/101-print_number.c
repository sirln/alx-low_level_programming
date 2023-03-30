#include "main.h"
/**
 *print_number - prints an integer
 *@n: parameter
 *Return: no return value
 */
void print_number(int n)
{
	int abs;
	int mult = 1;
	int abSCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abSCount = n;

	while (abSCount > 0)
	{
		abSCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult) + '0');
		abs = abs % mult;
		mult /= 10;
	}
}
