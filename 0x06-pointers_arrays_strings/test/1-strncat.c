/**
 *_strncat - concatenates two strings.
 *	using at most n bytes from `src`
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, s;

	for (l = 0; dest[l] != '\0'; l++)
	{}

	for (s = 0; src[s] != '\0'; s++)
	{
		if (s < n)
		{
			dest[l + s] = src[s];
		}
	}
	return (dest);
}
