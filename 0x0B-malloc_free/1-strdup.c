#include "main.h"
#include <stdlib.h>

/**
  * _strdup - points a string to a duplicate of str
  * @str: tring to be duplicated and pointed at
  * Return: check code
  */

char *_strdup(char *str)
{
	unsigned int i;
	char *nstr;

	if (str == NULL)
		return (NULL);
	i = 0;

	nstr = malloc(sizeof(str));

	while (str[i])
	{
		nstr[i] = str[i];
		i++;
	}

	return (nstr);
	free(nstr);
}
