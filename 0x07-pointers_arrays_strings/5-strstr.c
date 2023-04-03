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
		char *n = needle;
		if (*haystack == *n)
		{
			while (*haystack == *n)
			{
				if (*haystack == *n)
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
