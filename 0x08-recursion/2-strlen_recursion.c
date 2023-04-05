#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *
 *@s: parameter
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l = _strlen_recursion(s + 1);
		l++;
	}

	return (l);
}
