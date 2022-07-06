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
	float tsum;

	for (a = 0; a < 50; a++)
	{
		sum = f1 + f2;
		
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			tsum += sum;
		f1 = f2;
		f2 = sum;
	}

	printf("%.0f\n", tsum);

	return (0);
}
