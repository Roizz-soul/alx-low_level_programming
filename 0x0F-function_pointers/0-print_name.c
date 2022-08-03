#include "function_pointers.h"

/**
  * print_name - a funtion that prints a name
  * @name: name of individual to be printed
  * @f: a pointer to a function that prints the name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
