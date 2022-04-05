#include "main.h"
/**
 * flip_bits - clear a number bit
 * @n: number
 * @m: number
 * Return: count if bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a_xor_m = n ^ m;
	unsigned int count = 0;

	if (!n)
		return (-1);
	if (!m)
		return (-1);
	while (a_xor_m > 0)
	{
		a_xor_m = a_xor_m & (a_xor_m - 1);
		count++;
	}
	return (count);
}
