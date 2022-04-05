#include "main.h"
/**
 * get_bit - get bit index
 * @n: number to extract the index
 * @index: index to the number
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num = n;

	if (index > 10)
		return (-1);
	else if (n)
	{
		num = num >> index;
	}
	return (num & 1);
}