#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: the string to be printed
*/

void print_rev(char *s)
{
	char *v = s;

	while (*(v + 1) != '\0')
		v++;
	while (v > s)
	{
		char t = *v;

		*v-- = *s;
		*s++ = t;
		_putchar(t);
	}

	_putchar('\n');
}
