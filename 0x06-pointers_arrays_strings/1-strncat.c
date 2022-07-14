#include "main.h"

/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: destination parameter
* @src: source parameter
* @n: number of bytes to take from src
* Return: check code
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
