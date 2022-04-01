#include "lists.h"
/**
 * listint_len - program to find the lenegth of a linked list
 * @h: pointer to the firts node of the list
 * Return: the count of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (; h; count++)
		h = h->next;
	return (count);
}
