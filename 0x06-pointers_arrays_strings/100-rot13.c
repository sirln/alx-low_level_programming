/**
 *rot13 - encodes a string into 1337.
 *@enc: parameter
 *Return: encoded string
 */
char *rot13(char *enc)
{
	int l, n;

	char enc_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc_map[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; enc[l] != '\0'; l++)
	{
		for (n = 0; enc_chars[n] != '\0'; n++)
		{
			if (enc[l] == enc_chars[n])
			{
				enc[l] = enc_map[n];
				break;
			}
		}
	}
	return (enc);
}
