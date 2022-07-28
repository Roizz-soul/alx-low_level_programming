#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value of element in the array
  * @max: maximum value
  * Return: check code
  */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	j = 0;

	for (i = min, i <= max, i++)
		array[j++] = min++;

	return (array);
}
