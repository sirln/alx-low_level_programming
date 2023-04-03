/**
 *_strstr - locates a substring.
 *
 *@haystack: parameter
 *@needle: parameter
 *
 *Return: length of prefix substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char n = 0;
		if (*haystack == needle[n])
		{
			while(*haystack == needle[n])
			{
				if (*haystack + 1 == '\0')
				{
					return (haystack);
				}
				n++;
			}
		}
		haystack++;
	}

	return ('\0');
}
