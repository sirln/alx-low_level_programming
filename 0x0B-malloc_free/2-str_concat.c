#include <stdlib.h>
#include <stddef.h>
/**
 *str_concat - concatenates two strings.
 *
 *@s1: parameter
 *@s2: parameter
 *Return: NULL or pointer.
 */

char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	int l = 0, n = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	while (s1[l] != '\0')
	{
		l++;
	}

	while (s2[n] != '\0')
	{
		n++;
	}

	s1s2 = malloc(sizeof(char) * (l + n + 1));

	if (s1s2 == NULL)
		return (NULL);

	while (x < l)
	{
		s1s2[x] = s1[x];
		x++;
	}

	while (y < n)
	{
		s1s2[y + l] = s2[y];
		y++;
	}
	s1s2[y + l] = '\0';

	return (s1s2);
}
