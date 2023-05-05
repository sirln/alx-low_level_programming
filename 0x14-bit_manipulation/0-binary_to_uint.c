#include "main.h"
/**
  *binary_to_uint - convert binary number to unsigned int
  *
  *@b: pointer to a string of `0` and `1` chars
  *
  *Return: converted number or 0
  */


unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
			l = (l << 1) | 1;
		else if (*b == '0')
			l = l << 1;
		else
			return (0);
		b++;
	}
	return (l);
}
