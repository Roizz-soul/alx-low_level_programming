#include "main.h"

/**
  * set_string - a function that sets the value of a pointer to a char
  * @s: pointer of pointer
  * @to: what to be pointed
  */

void set_string(char **s, char *to)
{
	*s = to;
}
