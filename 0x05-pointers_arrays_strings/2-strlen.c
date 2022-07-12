#include "main.h"

/**
* _strlen - Returns the length of whatever string is put in
* @s: String to be inputed
* Return: Check code
*/

int _strlen(char *s)
{
	int i;

	for (i = 0, *s++, i++)
		;

	return (i);
}
