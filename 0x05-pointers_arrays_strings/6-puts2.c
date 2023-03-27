#include "main.h"
#include "2-strlen.c"
/**
 *puts2 -  function that prints every other character of a string,
 *	starting with the first character, followed by a new line.
 *@str: pointer parameter
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] < _strlen(str))
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
