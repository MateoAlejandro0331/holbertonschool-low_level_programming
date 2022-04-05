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

	if (num)
	{
		num = num >> index;
		n = num;
		if (!n)
			return (-1);
		return (num & 1);
	}
	else
		return (-1);
}
