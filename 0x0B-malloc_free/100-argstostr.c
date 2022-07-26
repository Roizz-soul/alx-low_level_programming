#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates arguments in our program
  * @ac: argument count
  * @av: argument vector
  * Return: check code
  */

char *argstostar(int ac, char **av)
{
	char *str;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	}
	str = malloc(sizeof(char) * (k + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
