#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sumar dos enteros
 * @a: integer to operate
 * @b: integer to operate
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - restar dos enteros
 * @a: integer to operate
 * @b: integer to operate
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicar dos enteros
 * @a: integer to operate
 * @b: integer to operate
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - dividir  dos enteros
 * @a: integer to operate
 * @b: integer to operate
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo/residuo dos enteros
 * @a: integer to operate
 * @b: integer to operate
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
