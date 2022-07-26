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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	k = i + j;


	strsum = malloc(sizeof(char) * (k + 2));

	if (strsum == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		strsum[l] = s1[l];

	for (m = 0; s2[m] != '\0'; m++)
		strsum[l++] = s2[m];

	return (strsum);
	free(strsum);
}
