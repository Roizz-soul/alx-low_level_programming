#include <stdio.h>
#include <stdlib.h>

/**
  * main - check code
  * @argc: argument count
  * @argv: argument vector
  * Return: check code
  */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				exit(98);
			}
		}
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
