#include "lists.h"
/**
 * print_dlistint - print list
 * @h: pointer to the head
 * Return: count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
