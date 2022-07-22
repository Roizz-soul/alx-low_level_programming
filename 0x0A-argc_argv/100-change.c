#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int i, j, coins = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (0);
	}

	j = atoi(argv[1]);

	for (i = 0;; i++)
	{
		if (j - 24 > 0)
		{
			coins++;
			j -= 25;
		} else if (j - 9 > 0)
		{
			coins++;
			j -= 10;
		} else if (j - 4 > 0)
		{
			coins++;
			j -= 5;
		} else if (j - 1 > 0)
		{
			coins++;
			j -= 2;
		} else if (j - 1 == 0)
		{
			coins++;
			j -= 1;
		} else
			break;
	}

	printf("%d\n", coins);

	return (0);
}
