#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else {

		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= n; i++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (j > i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
