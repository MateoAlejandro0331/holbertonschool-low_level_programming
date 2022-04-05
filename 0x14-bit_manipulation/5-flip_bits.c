#include "main.h"
/**
 * flip - flip bits
 * @b: number
 * Return: count if bits.
 */
int flip(int b)
{
	int count = 0;

	while (b > 0)
	{
		b = b & (b - 1);
		count++;
	}
	return (count);
}
/**
 * flip_bits - flip bits using XOR
 * @n: number
 * @m: number
 * Return: to funtion flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (flip(n ^ m));
}
