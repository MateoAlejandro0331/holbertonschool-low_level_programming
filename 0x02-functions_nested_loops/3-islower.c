#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
* _islower - check the code.
* @c: un entero de la funcion
* Return: Always 0.
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
