  #include "main.h"
/**
 * print_last_digit - check the code.
 * @n: un entero de la funcion
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int t;
	
	t = n % 10;

	if (n <= 0)
	{
		_putchar(-t + '0');
		return (-t);
	}
	else
	{
		_putchar(t + '0');
		return (t);
	}
	return (0);
}
