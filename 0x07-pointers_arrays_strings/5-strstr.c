#include "main.h"

/**
  * _strstr - a function that locates a substring
  * @haystack: the string to be searched
  * @needle: substring to be searched for
  * Return: check code
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
				;

			if (needle[j--] == haystack[(i + j)--])
				return (haystack + i);
		}
	}

	return (0);
}
