#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: representss characters
 *
 * Return: Specified in the code
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
