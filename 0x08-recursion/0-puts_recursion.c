#include "main.h"

/**
  * _puts_recursion - a function that prints a string followed by a new line
  * @s: string to be printed
  */

void _puts_recursion(char *s)
{
	char c;

	if (*s == '\0')
		_putchar('\n');
	else
	{
		char c = *s;

		_putchar(c);
		_puts_recursion(*(s + 1));
	}
}
