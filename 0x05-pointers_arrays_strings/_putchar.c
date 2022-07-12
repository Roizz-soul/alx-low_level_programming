#include <stdio.h>
#include <unistd.h>

/**
* _putchar - Entry point, performs the same function as putchar
* Return: Value of function
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
