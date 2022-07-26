#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * strtow - splits string into words
  * @str: string to be split
  * Return: check code
  */

char **strtow(char *str)
{
	char *array;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc(sizeof(char) * (i + j + 1));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < 1; k++)
		array[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		array[i] = str[k];
		i++;
	}
	array[i] = '\0';
	return (NULL);
}
