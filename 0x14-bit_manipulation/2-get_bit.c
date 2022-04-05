#include "main.h"
/**
 * get_bit - get bit index
 * @n: number to extract the index
 * @index: index to the number
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 64;
	int num = n;

	if (index <= bits)
	{
		num = num >> index;
	}
	else
		return (-1);
	return (num & 1);
}
