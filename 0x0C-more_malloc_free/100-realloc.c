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
	char *cptr, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	cptr = ptr;
	array = malloc(new_size);
	if (array == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = array;

	for (i = 0; i < new_size && i < old_size; i++)
		filler[i] = *cptr++;

	free(ptr);
	return (array);
}
