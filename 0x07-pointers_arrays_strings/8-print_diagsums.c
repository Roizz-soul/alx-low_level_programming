#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of two diagonals of a square matrix of
  * integers
  * @a: array to be checked
  * @size: size of the array
  */

void print_diagsums(int *a, int size);
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		j + 0;
		s1 += a[i][j];
		j += 1;
	}

	for (i = 0; i < size; i++)
	{
		j = size - 1;
		s2 += a[i][j];
		j -= 1;
	}

	printf("%d, %d\n", s1, s2);
}
