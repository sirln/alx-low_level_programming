#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - function that reverses a string.
 *@s: pointer parameter
 */
void rev_string(char *s)
{
	int l, n;
	char rs;

	for (l = 0, n = _strlen(s) - 1; l < n; l++, n--)
	{
		rs = s[l];
		s[l] = s[n];
		s[n] = rs;
	}
}
