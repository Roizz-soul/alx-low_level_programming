#include <stdio.h>
#include <stdlib.h>

/**
  * main - check code
  * @argc: argument count
  * @argv: argument vector
  * Return: check code
  */
int main(int argc, char **argv)
{
	int i, j;
	char *fil;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	fil = argv;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; fil[i][j]; j++)
		{
			if (fil[i][j] < '0' || fil[i][j] > '9')
			{
				printf("%s\n", "Error");
				exit(98);
			}
		}
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
