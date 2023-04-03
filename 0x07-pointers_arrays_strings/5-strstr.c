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
	int l = 0;
	int s = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[l] != '\0')
	{
		if (haystack[l] == needle[0])
		{
			while (needle[s] != '\0')
			{
				if (haystack[l + s] != needle[s])
				{
					break;
				}
				s++;
			}
			if (needle[s] == '\0')
			{
				return (haystack + l);
			}
		}
		l++;
	}

	return ('\0');
}
