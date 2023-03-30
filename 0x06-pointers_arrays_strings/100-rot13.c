/**
 *rot13 - encodes a string into 1337.
 *@enc: parameter
 *Return: encoded string
 */
char *rot13(char *enc)
{
	int l = 0;

	while (enc[l] != '\0')
	{
		if ((enc[l] >= 'a' && enc[l] <= 'm') || (enc[l] >= 'A' && enc[l] <= 'M'))
		{
			enc[l] += 13;
		}
		enc[l] -= 13;
		l++;

	}
	return (enc);
}
