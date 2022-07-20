#include "main.h"

/**
  * _pow_recursion - returns the value of an int raised to a power
  * @x: integer to be raised
  * @y: power of integer
  * Return: check code
  */

int _pow_recursion(int x, int y)
{
	int answer;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	answer = x * _pow_recursion(x, y - 1);

	return (answer);
}
