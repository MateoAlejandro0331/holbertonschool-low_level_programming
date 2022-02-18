#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num;
	int filas;

	for (filas = 0; filas < 10; filas++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num +48);
			}
			else
			{
				_putchar((num/10) + 48);
				_putchar((num%10) + 48);
			}
		}
		_putchar('\n');
	}
}
