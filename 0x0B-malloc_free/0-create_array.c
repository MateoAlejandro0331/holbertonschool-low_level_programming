#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		str = malloc(sizeof(char) * size);
			if (!str)
				return ('\0');
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
	}
	return (str);
}
