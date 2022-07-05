#include <unistd.h>

/**
 * _putchar - Entry
 *
 * Return: value of the function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
