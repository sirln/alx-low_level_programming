#include  "main.h"
/**
 *_isalpha -  checks for alphabetic character.
 *@c: parameter
 *Return: returns 1 if value passed meets the condition, otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
