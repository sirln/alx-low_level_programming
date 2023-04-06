#include "main.h"

int _palindrome(char *s, int l);
/**
 *_strlen - function that returns the length of a string.
 *@s: pointer parameter
 *Return: returns l.
 */
int _strlen(char *s)
{
	int l = 0;

	if (*s)
	{
		l = _strlen(s + 1);
		l++;
	}
	return (l);
}

/**
 *_palindrome - function that returns 1 if a string
 *		is a palindrome and 0 if not.
 *
 *@s: parameter
 *@l: parameter
 *
 *Return: returns 1 or  0
 */

int _palindrome(char *s, int l)
{

	if (*s)
	{
		if (*s != s[_strlen(s) - l])
			return (0);
		else
			return (_palindrome(s + 1, l + 1));
	}
	return (1);
}

/**
 *is_palindrome - function that returns 1 if a string
 *		is a palindrome and 0 if not.
 *
 *@s: parameter
 *
 *Return: returns return value of _palindrome
 */

int is_palindrome(char *s)
{
	int l = 1;

	return (_palindrome(s, l));
}
