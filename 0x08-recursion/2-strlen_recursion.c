#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: string to be checked
  * Return: an integer
  */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		int i;

		if (*S == '\0')
			i = 0;
		else
			i = 1;

		return (i + _strlen_recursion(s + 1));
	}
}
