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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
