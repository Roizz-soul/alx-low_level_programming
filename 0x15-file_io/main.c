#include <stdio.h>
#include <string.h>

int main()
{
	char *lineptr = NULL, *token;
	size_t n = 0;

	printf("$ ");
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);
	token = strtok(lineptr, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
