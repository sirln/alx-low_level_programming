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
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *n = needle;

		if (*haystack == *n)
		{
			while (*haystack == *n)
			{
				if (*(n + !) == '0')
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
