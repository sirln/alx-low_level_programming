#include "main.h"
/**
 *print_number - prints an integer
 *@n: parameter
 *Return: no return value
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');

}
