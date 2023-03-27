/**
 *_strlen - function that returns the length of a string.
 *@s: pointer parameter
 *Return: returns l.
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
