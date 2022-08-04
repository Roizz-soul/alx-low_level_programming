#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_all - prints anything
  * @format: a list of types of arguments to be printed
  */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *str;
	va_list ap;

	va_start(ap, format);

	while (format && format[i] != '\0')
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				j = 0;
				break;
		}
		if (format[i + 1] != '\0' && j == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
