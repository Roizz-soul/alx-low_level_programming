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

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

		if (!accept[j])
			break;
	}
}
