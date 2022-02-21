#include "main.h"
#include <stdio.h>

/**
* swap_int - check the code
*@a: a pointer inside the funtion
*@b: a pointer inside the funtion
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
