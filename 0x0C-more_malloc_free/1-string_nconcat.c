#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: First string to be concatenated
  * @s2: second string to be concatenated
  * @n: number of elements in s2 to be added
  * Return: check code
  */

char *string_nconcat(char *s1, char s2, unsigned int n)
{
	char *sum;
	int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sum = malloc(sizeof(s1) + (sizeof(char) * n));

	for (i = 0; s1[i]; i++)
		sum[k++] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		sum[k++] = s2[j];
	sum[k] = '\0';

	return (sum);
}
