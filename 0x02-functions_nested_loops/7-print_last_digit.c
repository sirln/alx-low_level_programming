#include  "main.h"
/*#include "6-abs.c"*/

/**
 *print_last_digit -  prints the last digit of a number.
 *
 *@s: parameter
 *
 *Return: returns last digit in s
 *
 */
int print_last_digit(int s)
{
	int abso;

	abso = s % 10;
	abso = _abs(abso);
	_putchar(abso + '0');
	return (abso);
}

