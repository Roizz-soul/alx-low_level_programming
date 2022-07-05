#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - check code
 *
 * c - character to be checked
 *
 * Return: Also check code
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
