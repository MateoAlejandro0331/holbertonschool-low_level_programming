#include "main.h"

/**
 * puts2 - check the code
 *@str: pointer inside the funtion.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
