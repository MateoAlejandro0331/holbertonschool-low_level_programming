#include "lists.h"
/**
 * list_len - check the code
 * @h: pointer to the firts node if the linked list
 * Return: count of elements.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
