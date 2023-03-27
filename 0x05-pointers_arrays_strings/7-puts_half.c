#include "main.h"
#include "2-strlen.c"
/**
 *puts_half -  function that prints half of a string, followed by a new line.
 *	function prints the second half of the string
 *	If the number of characters is odd.
 *@str: pointer parameter
 */
void puts_half(char *str)
{
	int n = ((_strlen(str) - 1) / 2);
	int n_odd = (_strlen(str) - 1) % 2;
	int l = n + 1;

	if (n_odd == 1)
	{
		while (l < _strlen(str))
		{
			_putchar(str[l]);
			l++;
		}
	}
	_putchar('\n');
}
