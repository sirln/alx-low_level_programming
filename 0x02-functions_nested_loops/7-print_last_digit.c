#include  "main.h"
#include "6-abs.c"
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
	/* s = _abs(s % 10);
	s = _putchar('0' + _abs(s % 10));
	return (_abs(s));*/
	_putchar('0' + _abs(s % 10));
	return (_abs(s % 10));
}
