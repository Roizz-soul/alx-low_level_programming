#include "main.h"
#include <stdlib.h>

/**
  * _strdup - points a string to a duplicate of str
  * @str: tring to be duplicated and pointed at
  * Return: check code
  */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *nstr;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (str[j])
		j++;

	nstr = malloc(sizeof(char) * j);

	if (nstr == NULL)
		return (NULL);

	while (str[i])
	{
		nstr[i] = str[i];
		i++;
	}

	return (nstr);
	free(nstr);
}
