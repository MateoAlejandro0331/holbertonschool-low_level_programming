#include "main.h"

/**
 * puts_half - check the code
 *@str: pointer inside the funtion.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
