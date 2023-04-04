#include "main.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9
 *skips 2 & 4 followed by a new line.
 *Return: returns nothing
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
