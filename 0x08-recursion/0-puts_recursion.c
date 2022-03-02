#include "main.h"
/**
 * _puts_recursion - check the code
 *@s: pointer inside teh funtion.
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
