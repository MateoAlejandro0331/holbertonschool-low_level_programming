#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char num;

	for(num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
