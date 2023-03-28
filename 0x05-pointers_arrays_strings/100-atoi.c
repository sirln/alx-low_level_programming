#include "main.h"
#include "2-strlen.c"
/**
 *_atoi - function that convert a string to an integer.
 *number in the string can be preceded by an infinite number of characters
 *take into account all the - and + signs before the number
 *If there are no numbers in the string, the function must return 0
 *@s: pointer parameter
 *
 *Return: pointer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
