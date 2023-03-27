#include "main.h"
/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@str: pointer parameter
 */
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
