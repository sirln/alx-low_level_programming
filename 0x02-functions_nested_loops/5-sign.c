#include  "main.h"
/**
 *_isalpha -  checks for alphabetic character.
 *@c: parameter
 *Return: returns 1 if value passed meets the condition, otherwise returns 0
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
