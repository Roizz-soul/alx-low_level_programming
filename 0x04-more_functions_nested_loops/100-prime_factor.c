#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int pnum = 612852475143, i;

	while (i < (pnum % 2) == 0)
	{
		if ((pnum % 2) == 0)
		{
			pnum /= 2;
			continue;
		}

		for (i = 3; i < (pnum / 2); i += 2)
		{
		if ((pnum % i) == 0)
			pnum /= i;
		}
	}

	printf("%ld\n", pnum);

	return (0);
}
