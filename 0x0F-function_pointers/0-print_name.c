#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Funtion that get the address of another funtion
 * @name: name of the person
 * @f: address of the funtion
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
