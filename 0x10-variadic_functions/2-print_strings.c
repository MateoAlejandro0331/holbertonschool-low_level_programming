#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *valor;
	va_list ptr;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		valor = va_arg(ptr, char *);
		if (valor != NULL)
		{
			if (i == (n - 1))
			{
				printf("%s", valor);
				break;
			}
			printf("%s%s", valor, separator);
		}
		else 
		{
			valor = "(nil)";
			if (i == (n - 1))
			{
				printf("%s", valor);
				break;
			}
			printf("%s%s", valor, separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
