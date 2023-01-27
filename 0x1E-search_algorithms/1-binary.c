#include "search_algos.h"

/**
  * binary_search - searches for a value in an array using the linear search
  * algorithm
  * @array: array to search
  * @size: size of the array
  * @value: value to search for
  * Return: index of value searched for -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	int i, s, high, mid, low;

	s = (int) size;
	low = 0;
	high = s - 1;
	mid = (low + high) / 2;
	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		mid = (low + high) / 2;
	}

	return (-1);
}
