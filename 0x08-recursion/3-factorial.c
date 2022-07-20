#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number to be executed on
  * Return: check code
  */

int factorial(int n)
{
	int answer;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	answer = n * factorial(n - 1);

	return (answer);
}
