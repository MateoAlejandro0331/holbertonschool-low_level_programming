#include "main.h"
/**
 * clear_bit - clear a number bit
 * @n: number to extract the index
 * @index: index to the number
 * Return: clear number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 64;
	int masc = 1;

	masc = ~(masc << index);
	if (index <= bits)
	{
		*n = (masc & *n);
		return (1);
	}
	else
		return (-1);
}
