#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination string to be added to
* @src: string to be added
* Return: check code
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
