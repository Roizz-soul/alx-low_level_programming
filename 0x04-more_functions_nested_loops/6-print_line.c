#include "main.h"

/**
 * print_line - prints number of underscure
 * @n: number of undercores to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
