#include "search_algos.h"
/**
  * jump_search - searches for a value in an array using the jump search
  * algorithm
  * @array: array to search
  * @size: size of the array
  * @value: value to search for
  * Return: index of value searched for -1 if not found
  */
int jump_search(int *array, size_t size, int value)
{
	int s, high, step, prev;
	/*size_t siize;*/

	s = (int) size;
	prev = 0;
	high = s - 1;
	step = sqrt(s);
	if (array == NULL)
		return (-1);

	while (prev <= high)
	{
		if (array[prev] < value)
		{
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			prev = prev + step;
		}
		else
		{
			prev = prev - step;
			printf("Value found between indexes [%d] and [%d]\n", prev,
					prev + step);
			while (prev <= high)
			{
				printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
				prev++;
			}
			return (-1);
		}
	}

	return (-1);
}
