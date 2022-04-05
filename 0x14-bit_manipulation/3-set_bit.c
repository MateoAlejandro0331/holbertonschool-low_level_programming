#include "main.h"
/**
 * set_bit - set a number bit
 * @n: number to extract the index
 * @index: index to the number
 * Return: set number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 64;
	int num = 1;

	num = num << index;
	if (index <= bits)
	{
		*n = (num | *n);
	}
	else
		return (-1);
	return (*n);
}
