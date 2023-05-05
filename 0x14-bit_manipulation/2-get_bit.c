#include "main.h"
/**
  *get_bit - returns the value of a bit at a given index
  *
  *@n: number
  *@index: index of number to get bit
  *
  *Return: value of the bit at index index or -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int l;

	if (index >= (sizeof(l) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
