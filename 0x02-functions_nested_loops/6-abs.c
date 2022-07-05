#include "main.h"

/**
 * _abs - to print the absolute value of a number
 * @c: character representing integer
 *
 * Return: check code
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
