#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  *
  * @array: array of integers
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: index o f first integer or -1;
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int l = 0;

	if (size <= 0)
		return (-1);

	while (l < size)
	{
		if (cmp(array[l]))
			return (l);
		l++;
	}
	return (-1);
}
