#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing the numbers in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;
	char ch;

	for (b =  0; b < 10; b++)
		putchar((b % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
