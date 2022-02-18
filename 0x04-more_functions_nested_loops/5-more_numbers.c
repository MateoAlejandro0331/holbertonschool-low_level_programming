#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
char numeros[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4};
int columnas;
int filas;

	for (columnas = 0; columnas < 10; columnas++)
	{
		for (filas = 0; filas <= 19; filas++)
		{
			_putchar(numeros[filas] + 48);
		}
		_putchar('\n');
	}
}
