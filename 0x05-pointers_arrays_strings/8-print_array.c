#include "main.h"
/**
 * print_array - check the code for
 *@a: pointer inside the funtion.
 *@n: int indisde the funtion.
 * Return: Always 0.
 */

 void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != (-1024))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}