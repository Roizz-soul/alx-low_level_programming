#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  * @s: string to be checked
  * @c: character to check for
  * Return: a pointer to the first occurrence of c
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i++]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
