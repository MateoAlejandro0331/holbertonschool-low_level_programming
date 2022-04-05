#include "main.h"
/**
 * flip_bits - clear a number bit
 * @n: number
 * @m: number
 * Return: count if bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a_xor_m = n ^ m;
	int count = 0;

	while (a_xor_m > 0)
	{
		a_xor_m = a_xor_m & (a_xor_m - 1);
		count++;
	}
	return (count);
}
