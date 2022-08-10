#include "search_algos.h"
/**
 * linear_search - earches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array of integers to search the value
 * @size: array size
 * @value: value to search
 * Return: the index in the array otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	int index, auxsize = size;

	if (!array)
		return (-1);
	for (index = 0; index < auxsize; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
