#include "main.h"

/**
  * _strstr - a function that locates a substring
  * @haystack: the string to be searched
  * @needle: substring to be searched for
  * Return: check code
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i++] == needle[j++])
				return (s + i);
		}
	}

	return (0);
}
