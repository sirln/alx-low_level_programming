#include <stdlib.h>
#include <stddef.h>
/**
 *string_nconcat - concatenates two strings.
 *
 *@s1: parameter
 *@s2: parameter
 *@n: parameter
 *
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	if (n >= y)
		n = y;

	s = malloc(sizeof(char) * (n + x + 1));
	if (s == NULL)
		return (NULL);

	for (l = 0; l < x; l++)
		s[l] = s1[l];

	for (l = 0; l < n; l++)
		s[l + x] = s2[l];

	s[l + x] = '\0';

	return (s);
}
