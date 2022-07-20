#include "main.h"

int find_root(int num, int root);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to be rooted
  * Return: check code
  */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (find_root(n, sqrt));
}
/**
  * find_root - finds the root of a number
  * @num: number
  * @root: root of number
  * Return: check code
  */

int find_root(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == (num / 2))
		return (-1);

	return (find_root(num, root + 1));
}
