#include "main.h"

/**
 * print_diagonal - prints diagonal on each line with spaces
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 1; j < n; j++)
					_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
