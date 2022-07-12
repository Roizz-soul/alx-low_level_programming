#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: the string to be printed
*/

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[j++]; i++)
		;
	for (j = i; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
