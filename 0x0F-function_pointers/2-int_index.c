#include "function_pointers.h"

/**
  * int_index - searches for an int
  * @array: array to search
  * @size: number of elements in the array
  * @cmp: pointer to function used to compare values
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	else

}
