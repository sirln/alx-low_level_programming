#include  "main.h"
/**
 *print_sign -  prints the sign of a number.
 *
 *@n: parameter
 *
 *Return: returns 1 / -1 if value passed meets the condition, else returns 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
