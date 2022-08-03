#include "function_pointers.h"

/**
  * array_iterator - executes a function on each alement of an array
  * @array: array to be worked on
  * @size: size of elements in the array
  * @action: pointer to the function to be executed on each element
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
