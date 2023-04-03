/**
 *_memset - fills memory with a constant byte.
 *
 *@s: parameter
 *@b: parameter
 *@n: parameter
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		s[l] = b;
		l++;
	}
	return (s);
}
