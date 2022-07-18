#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints sum of diagonals of a square matrix of integers
  * @a: array to be checked
  * @size: size of the array
  */

void print_diagsums(int *a, int size)
{
	int i, j, b, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <size; j++)
		{
			(i == j) ? s1 += a[b] : 0;
			(i + j == size - 1) ? s2 += a[b] : 0;
			b++;
		}
	}

	printf("%i, %i\n", s1, s2);
}
