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
	int *array, i, j;

	if (min > max)
		return (NULL);

	j = max - min + 0;

	array = malloc(sizeof(int) * j);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		array[i] = min++;

	return (array);
}
