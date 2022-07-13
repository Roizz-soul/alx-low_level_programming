#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: the string to be printed
*/

void print_rev(char *s)
{
	if(!s || _strlen(s) < 2)
		_putchar(s);

	int end = _strlen(s)-1;
	int start = 0;

	while( start < end )
	{
		s[start] ^= s[end];
		s[end] ^= s[start];
		s[start++]^= s[end--];
	}

	_putchar(s);
	_putchar('\n');
}
