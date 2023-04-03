/**
 *_strchr - locates a character in a string.
 *
 *@s: parameter
 *@c: parameter
 *
 *Return: pointer to the first character
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}

	return ('\0');
}
