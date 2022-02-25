#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int *p = a; /*Apunta a la cadena*/
	int c = 0; /*inicio*/
	int temp; /* Posicion temporal*/

	n--;
	while (c < n)
	{
		temp = *(p + c);
		*(p + c) = *(p + n);
		*(p + n) = temp;
		c++;
		n--;
	}
}
