#include "lists.h"
/**
 * dlistint_len - return the number of elements of a linked list
 * @h: poiinter to the first node in the list
 * Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
