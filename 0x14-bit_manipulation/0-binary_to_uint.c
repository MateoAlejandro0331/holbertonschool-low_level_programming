#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: binary to convert
 * Return: num decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pot[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048,
						  4096, 8192, 16384, 32768, 65536, 131072, 262144,
						  524288, 1048576};
	unsigned int i, len, num = 0;

	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
		;
	len--;
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			num += pot[len];
		}
		else if ((b[i] != '1') & (b[i] != '0'))
			return (0);
		len--;
	}
	return (num);
}
