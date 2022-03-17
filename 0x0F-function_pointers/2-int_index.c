#include "function_pointers.h"
/**
 * int_index - Funtion that get the address of another funtion
 * @array: array to compare integers
 * @cmp: address of the funtion
 * @size: size of the array
 * Return: Value determinate
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
				if (cmp(array[i]) == 1)
					return (i);
		}
		return (-1);
	}
	return (0);
}
