#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: destination to be copied to
  * @src: source to be copied from
  * @n: number of elements to be copied from source
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
