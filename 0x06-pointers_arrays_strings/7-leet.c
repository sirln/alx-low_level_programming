/**
 *leet - encodes a string into 1337.
 *
 *Return: encoded string
 */
char *leet(char *enc)
{
	int l, n;
	char enc_lts[] = "aAeEoOtTlL";
	char enc_nums[] = "4433007711";

	for (l = 0; enc[l] != '\0'; l++)
	{
		for (n = 0; enc_lts[n] != '\0'; n++)
		{
			if (enc[l] == enc_lts[n])
			{
				enc[l] = enc_nums[n];
				break;
			}
		}
	}
	return (enc);
}
