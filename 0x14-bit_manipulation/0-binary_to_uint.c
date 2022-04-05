#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: binary to convert
 * Return: num decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pot[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
	unsigned int i, len, num = 0;

	for (len = 0; b[len]; len++)
		;
	len--;
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			num += pot[len];
		}
		len--;
	}
	return (num);
}
