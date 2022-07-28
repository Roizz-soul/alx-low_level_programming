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
	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
