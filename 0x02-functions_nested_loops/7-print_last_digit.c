  #include "main.h"
/**
 * print_last_digit - check the code.
 * @n: un entero de la funcion
 * Return: Always 0.
 */

int print_last_digit(int n)
{

	if ( n >= 0)
	{
		n = n % 10;
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
