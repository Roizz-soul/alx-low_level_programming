#include "main.h"

/**
  * _strpbrk - a function that searches a string for any of a set of bytes
  * @s: string to check occurrence from
  * @accept: set of bytes to be checked for
  * Return: check code
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		char *a = accept;

		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
				return (s + i);
		}

		if (!a[j])
			break;
	}

	return (0);
}
