#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: array of integers to show
 * @size: size of the array
 * @action: pointer to the funtion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
