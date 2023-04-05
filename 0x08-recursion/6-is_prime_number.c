#include "main.h"

int is_prime(int n, int l);
/**
 *is_prime - function that returns 1 if the input
 *	integer is a prime number, otherwise return 0.
 *
 *@n: parameter
 *@l: parameter
 *
 *Return: returns 1
 */
int is_prime(int n, int l)
{
	if (n < 2)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % l == 0)
		return (0);

	if (l * l > n)
		return (1);

	return (is_prime(n, l + 1));
}

/**
 *is_prime_number - function that returns 1 if the input
 *	integer is a prime number, otherwise return 0.
 *
 *@n: parameter
 *
 *Return: returns return value of is_prime
 */

int is_prime_number(int n)
{
	int l = 2;

	return (is_prime(n, l));
}
