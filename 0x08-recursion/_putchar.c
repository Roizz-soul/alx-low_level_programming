#include <unistd.h>

/**
  * _putchar - does the same as putchar
  * @c: character to be printed
  * Return: check code
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
