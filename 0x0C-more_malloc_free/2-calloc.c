#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocating memory for an array using malloc
  * @nmemb: number of elements to fit the array
  * @size: byte size
  * Return: check code
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if(array == NULL)
		return (NULL);

	j = array;

	for (i = 0; i < (nmemb * size); i++)
		j[i] = '\0';

	return (array);
}
