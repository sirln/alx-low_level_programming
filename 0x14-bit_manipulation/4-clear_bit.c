#include "main.h"
/**
  *clear_bit - sets the value of a bit at a given index to 0
  *
  *@n: pointer to bit
  *@index: index of number to set bit to 0
  *
  *Return: 1 or -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l;

	if (index >= (sizeof(l) * 8))
		return (-1);

	*n &= ~(1 << index);
	return	(1);
}
