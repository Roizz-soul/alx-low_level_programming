#include "main.h"

/**
* _strncpy - copies n bytes of a string
* @dest: destination parameter
* @src: parameter 2
* @n: parameter 3
* Return: check code
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
