#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_numbers - prints all the numbers(parameters)
  * @separator: string to be put inbetween numbers
  * @n: number of integers to be passed in the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", *separator);
	}
	printf("\n");
}
