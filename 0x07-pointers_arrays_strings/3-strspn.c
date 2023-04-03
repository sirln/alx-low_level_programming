/**
 *_strspn - locates a character in a string.
 *
 *@s: parameter
 *@accept: parameter
 *
 *Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s)
	{
		char *n = accept;

		while (*n)
		{
			if (*s == *n)
			{
				l++;
				break;
			}
			n++;
		}
		if (*n == '\0')
		{
			return (l);
		}
		s++;
	}

	return (l);
}
