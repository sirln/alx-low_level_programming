#include "search_algos.h"

/**
  *binary_search -  searches for a value in a sorted array
  *     of integers using the Binary search algorithm
  *
  *@array: pointer to the first element of the array to search
  *@size: number of elements in array
  *@value: value to search for
  *
  *Return: first index where value is located
  *
  */

int binary_search(int *array, size_t size, int value)
{
	size_t s;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (s = left; s <= right; s++)
		{
			printf("%d", array[s]);

			if (s < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
