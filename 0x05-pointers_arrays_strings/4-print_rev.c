#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int j;

	for(j = 0; s[j]; j++)
	;
	for (j--; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
