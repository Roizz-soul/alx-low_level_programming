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

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	array[0] = c;

	if (array == NULL)
		return (NULL);

	return (array);

	free(array);
}
