#include "search_algos.h"
/**
 * print_array - print the array
 * @array: array to print
 * @low: firts number of the array
 * @hight: last number of the array
 * Return: nothing
 */
void print_array(int *array, int low, int hight)
{
	printf("Searching in array:");
	for (; low <= hight; low++)
	{
		if (low == hight)
			printf(" %d\n", array[low]);
		else
			printf(" %d,", array[low]);
	}
}
/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array of integers to search the value
 * @size: array size
 * @value: value to search
 * Return: the index in the array otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, hight = size - 1, middle;

	if (!array)
		return (-1);
	while (low <= hight)
	{
		print_array(array, low, hight);
		middle = low + ((hight - low) / 2);

		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			hight = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}
