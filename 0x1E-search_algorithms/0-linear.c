#include "search_algos.h"

/**
  * linear_search - searches for a value in an array using the linear search
  * algorithm
  * @array: array to search
  * @size: size of the array
  * @value: value to search for
  * Return: index of value searched for -1 if not found
  */
int linear_search(int *array, size_t size, int value)
{
	int i, s;

	s = (int) size;
	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
