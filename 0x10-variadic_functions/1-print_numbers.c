#include "variadic_functions.h"
/**
 *  print_numbers - check the code
 * @separator: char to separate the ints
 * @n: total arguments of the funtion
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(ptr, int));
			break;
		}
		printf("%d%s", va_arg(ptr, int), separator);
	}
	printf("\n");
	va_end(ptr);
}
