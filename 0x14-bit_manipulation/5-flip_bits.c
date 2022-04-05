#include "main.h"
/**
 * flip_bits - clear a number bit
 * @n: number
 * @m: number
 * Return: count if bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m = n ^ m;
	int count = 0;

	while (n_xor_m > 0)
	{
		n_xor_m = n_xor_m & (n_xor_m - 1);
		count++;
	}
	return (count);
}
