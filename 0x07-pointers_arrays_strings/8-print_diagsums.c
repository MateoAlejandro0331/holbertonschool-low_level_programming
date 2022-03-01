#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 *@a: pointer inside the funtion.
 *@size: int inside the funtion.
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < ((size * size) - 1))
			sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
