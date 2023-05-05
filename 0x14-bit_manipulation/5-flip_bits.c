#include "main.h"
/**
  *flip_bits - returns the number of bits you would
  *	need to flip to get from one number to another.
  *
  *@n: 1st number
  *@m: 2nd number
  *
  *Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l, num_bits = 0;

	l = n ^ m;
	while (l > 0)
	{
		num_bits = num_bits + (l & 1);
		l = l >> 1;
	}
	return (num_bits);
}
