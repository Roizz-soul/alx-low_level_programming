#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string to be printed
*/

void print_rev(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != 0; i++)
		;

	for (j = i - 1; j >= 0; j--)
	{
		c = s[j];
		_putchar(c);
	}

	_putchar('\n');
}
