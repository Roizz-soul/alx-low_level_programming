#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: check code
  */

char *str_concat(char *s1, char *s2)
{
	char *strsum;
	unsigned int i, j, k, l, m, n;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (i > 0)
		i = i + 1;
	else
		i = 0;
	if (j > 0)
		j = j + 1;
	else
		j = 0;

	k = i + j;

	strsum = malloc(sizeof(char) * k);

	if (strsum == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		strsum[l] = s1[l];
	for (m = (l + 1), n = 0; s2[n] != '\0'; m++, n++)
		strsum[m] = s2[n];

	return (strsum);
	free(strsum);
}
