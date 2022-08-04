#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_strings - prints all strings put in as argument
  * @separator: to be printed inbetween strings
  * @n: number of stings passed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char[]) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(ap, char[]));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
