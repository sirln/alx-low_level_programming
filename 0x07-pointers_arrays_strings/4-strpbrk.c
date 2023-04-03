/**
 *_strpbrk - searches a string for any of a set of bytes.
 *
 *@s: parameter
 *@accept: parameter
 *
 *Return: length of prefix substring
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *n = accept;

		while (*n)
		{
			if (*s == *n)
			{
				return (s);
			}
			n++;
		}
		s++;
	}

	return ('\0');
}
