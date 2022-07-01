#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the numbers in base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	putchar('\n');

	return (0);
}
