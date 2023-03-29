/**
 *_strcat - concatenates two strings.
 *
 *@dest: parameter
 *@src: parameter
 *
 *Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int l, n;

	for (l = 0; dest[l] != '\0'; l++)
	{}

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[l + n] = src[n];
	}

	return (dest);
}
