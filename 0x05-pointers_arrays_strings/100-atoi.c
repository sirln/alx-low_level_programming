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
	int i;
	int np = 0;
	int c;
	int d = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			np--;
		if (s[i] == '+')
			np++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num += ((s[i - 1] - '0') * d);
		i--;
		c--;
		d *= 10;
	}
	if (np >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
