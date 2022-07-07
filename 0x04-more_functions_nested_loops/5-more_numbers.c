#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 tentimes on each line
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
