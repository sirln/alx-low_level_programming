/**
 *_isdigit - function that checks for a digit (0 through 9).
 *@c: parameter
 *Return: returns 1 if value passed meets the condition, otherwise returns 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
