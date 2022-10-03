#include "main.h"

/**
* _strcmp - compares two strings
* @s1: String 1
* @s2: string 2
* Return: check code
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
