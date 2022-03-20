#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * struct op - struct op
 *
 * @op: The operator
 * @func: The function associated
 */
typedef struct op
{
	char *op;
	void (*func)();
} op_t;

void func_char(va_list ap);
void func_int(va_list ap);
void func_float(va_list ap);
void funcp_char(va_list ap);

#endif
