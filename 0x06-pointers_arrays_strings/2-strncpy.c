/**
 *_strncpy - concatenates two strings.
 *	using at most n bytes from `src`
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		*(dest + l) = src[l];
	}
	for(; l < n; l++)
	{
		*(dest + l) = '\0';
	}
	return (dest);
}
