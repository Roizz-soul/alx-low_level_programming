#include "main.h"
/**
  * binary_to_unit - converts binary to unsigned integer
  * @b: binary to be converted
  * Return: converted number or 0 if binary is invalid
  */
unsigned int binary_to_int(const char *b)
{
	unsigned int n, i, ans;
	char *s;

	if (b == NULL)
		return (0);
	s = strrev(b);
	i = 0, ans = 0, n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 1 || s[i] == 0)
		{
			ans += s[i] * pow(2, n);
			n++;
			i++;
		}
		else
			return (0);
	}
	return (ans);
}
