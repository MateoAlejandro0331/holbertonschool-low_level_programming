#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array during the runtime
 * @size: the address of memory to print
 * @c: type of date that is inside the array
 *
 * Return: the pointer that contains the array
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
