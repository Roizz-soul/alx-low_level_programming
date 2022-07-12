#include "main.h"

/**
* swap_int - Swaps the values of the integers inputed
* @a: first inputed integer
* @b: second inputed integer
*/

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
