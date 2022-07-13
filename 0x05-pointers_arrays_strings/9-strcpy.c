#include "main.h"

/**
* _strcpy - copies the string pointed to
* @dest: destination to be copy to
* @src: source to be copied from
*/

void *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
