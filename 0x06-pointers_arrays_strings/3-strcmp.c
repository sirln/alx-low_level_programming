/**
 *_strcmp - compares to strings.
 *
 *@s1: parameter
 *@s2: parameter
 *
 *Return: concatenated string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if  (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (0);
}
