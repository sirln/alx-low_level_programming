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

	while (l < _strlen(str))
	{
		_putchar(str[l]);
		l += 2;
	}
	_putchar('\n');
}
