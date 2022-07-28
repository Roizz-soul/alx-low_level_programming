#include "main.h"
#include <stdlib.h>

/**
  * _realloc - memory reallocation
  * @ptr: pinter to previous memory allocation
  * @old_size: size of ptr
  * @new_size: size to be reallocated
  * Return: check code
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < new_size && ptr[i]; i++)
		array[i] = ptr[i];

	return (array);
}
