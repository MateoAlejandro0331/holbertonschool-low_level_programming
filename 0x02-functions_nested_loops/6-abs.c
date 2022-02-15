#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - check the code.
 * @n: un entero de la funcion
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
