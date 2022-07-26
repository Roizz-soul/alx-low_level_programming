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
	unsigned int i, j, k, l, m;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (i > 0)
		i = i + 1;
	else if (s1 == NULL)
		i = 0;
	if (j > 0)
		j = j + 1;
	else if (s2 == NULL)
		j = 0;

	k = i + j - 1;

	strsum = malloc(sizeof(char) * k);

	if (strsum == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		strsum[l] = s1[l];

	for (m = 0; s2[m] != '\0'; m++)
		strsum[l++] = s2[m];

	return (strsum);
	free(strsum);
}
