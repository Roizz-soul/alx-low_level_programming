#include "main.h"

/**
 * _isdigit - checks if the given number is between 0 and 9
 * @c: character to be checked
 * Return: check code
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
