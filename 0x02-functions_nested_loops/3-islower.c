#include  "main.h"
/**
 *_islower -  checks for lowercase character.
 *@c: parameter
 *Return: returns 1 if value passed is true/lowercase, otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
