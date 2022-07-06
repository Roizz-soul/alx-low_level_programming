#include "main.h"

/**
 * print_times_table - printing the multiplication table
 * @n: number to be multiplied
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				k = i * j;

				if (k >= 100 && k <= 999)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
				}
				else if (k >= 10 && k <= 99)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar((k % 10) + '0');
			}

			_putchar('\n');
		}
	}

}

