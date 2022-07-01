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
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
