#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: binary to convert
 * Return: num decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int  num = 0;
	int len, base = 1;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
		;
	len--;
	while (b[len])
	{
		if (b[len] == '1')
			num = num + base;
		if ((b[len] != '1') && (b[len] != '0'))
			return (0);
		base = base * 2;
		len--;
	}
	return (num);
}
