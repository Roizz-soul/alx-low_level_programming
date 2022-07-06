#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long g, b, c, d, e, f;

	for (a = 0; a < 92; a++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		printf(", ");
	}
	g = f1 / 10000000000;
	c = f2 / 10000000000;
	b = f1 % 10000000000;
	d = f2 % 10000000000;

	for (a = 93; a < 99; a++)
	{
		e = g + c;
		f = b + d;
		if (b + d > 9999999999)
		{
			e += 1;
			f %= 10000000000;
		}

		printf("%lu%lu", e, f);

		if (a != 98)
			printf(", ");
		g = c;
		b = d;
		c = e;
		d = f;
	}

	printf("\n");

	return (0);
}
