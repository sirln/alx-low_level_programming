#include "main.h"
/**
 *_pow_recursion -  function that returns the
 *	value of x raised to the power of y.
 *
 *@n: parameter
 *
 *Return: factorial of n
 */
int _sqrt_recursion(int n)
{
	int l = 1;
	int s = 0;

	if (n < 0)
		return -1;

	if (n == 0)
		return 0;

	while (n > 0)
	{
		n  -= l;
		l += 2;
		s++;
	}
	if (n == 0)
		return s;
	else
		return -1;
}
