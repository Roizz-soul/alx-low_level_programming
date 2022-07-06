#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @c: character or integer
 *
 * Return: check code
 */

int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');

	return (ld);
}
