#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - print a range of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0, size = 0, *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (; min <= max; min++)
	{
		ptr[i] = min;
		i++;
	}
	return (ptr);
}
