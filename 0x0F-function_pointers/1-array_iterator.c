#include "function_pointers.h"
/**
  * array_iterator - function that executes a function
  *		given as a parameter on each element of an array
  *
  * @array: array of integers
  * @size: size of array
  * @action: pointer to function
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l = 0;

	if (size || action)
	{
		while (l < size)
		{
			action(array[l]);
			l++;
		}
	}
}
