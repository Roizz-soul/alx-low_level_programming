#include "main.h"
/**
  * binary_to_uint - converts binary to unsigned integer
  * @b: binary to be converted
  * Return: converted number or 0 if binary is invalid
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 1, i, ans = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		;
	for (i -= 1; i > 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			ans += (b[i] - '0') * n;
			n *= 2;
		}
		else
			return (0);
	}
	return (ans);
}
