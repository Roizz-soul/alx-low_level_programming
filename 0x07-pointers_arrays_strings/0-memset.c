#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: memory area to input constant byte
  * @b: constant byte to be inputed
  * @n: first n bytes to be filled in s
  * Return: check code
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
