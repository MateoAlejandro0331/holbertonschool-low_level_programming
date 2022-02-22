#include "main.h"

/**
 * print_rev - check the code
 *@s: pointer inside the funtion.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	for (j-- ; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
