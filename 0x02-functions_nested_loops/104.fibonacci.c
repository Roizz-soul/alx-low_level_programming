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

	for (a = 0; a < 98; a++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (a == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
