#include "main.h"

int _sqrt(int n, int l, int s);

/**
 *_sqrt -  function that returns to increment l and s
 *
 *@n: parameter
 *@l: parameter
 *@s: parameter
 *
 *Return: square root of n
 */


int _sqrt(int n, int l, int s)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (s);

	return (_sqrt(n - l, l + 2, s + 1));
}

/**
 *_sqrt_recursion -  function that returns
 *	the natural square root of a number.
 *
 *@n: parameter
 *
 *Return: n
 */


int _sqrt_recursion(int n)
{
	int l = 1;
	int s = 0;

	n = _sqrt(n, l, s);
	return (n);

}

