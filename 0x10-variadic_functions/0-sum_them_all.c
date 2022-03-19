#include "variadic_functions.h"
/**
 * sum_them_all - sumar varios enteros
 * @n: total de parametros de la funcion
 * Return: suma de los enteros
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
