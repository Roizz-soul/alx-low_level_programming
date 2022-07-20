#include "main.h"

int is_prime_number(int n);
int is_divisible(int num, int div);

/**
  * is_prime_number - checks if a number is prime
  * @n: number to be checked
  * Return: check code
  */

int is_prime_number(int n)
{
	int b = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, b));
}

/**
  * is_divisible - checks if number is divisible
  * @num: number to be checked
  * @div: divisor
  * Return: checkcode
  */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
