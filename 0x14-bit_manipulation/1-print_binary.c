#include "main.h"
/**
 * recursion - prints the binary representation of a int
 * @n: int
 */
void recursion(unsigned long int n)
{
	if (n)
	{
		recursion(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 * print_binary - call recursion to print binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursion(n);
}
