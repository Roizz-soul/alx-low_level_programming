#include "main.h"
#include <stdlib.h>

/**
  * create_array - cretaes an array, and initializes it with a char
  * @size: size of the array
  * @c: char to be initialized with
  * Return: check code
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

	free(array);
}
