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
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char[]);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
