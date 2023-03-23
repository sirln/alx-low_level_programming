/**
 *_isupper -  function that checks for uppercase character.
 *@c: parameter
 *Return: returns 1 if value passed meets the condition, otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
