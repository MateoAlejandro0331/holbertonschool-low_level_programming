#include "lists.h"
/**
 * print_list - print the content of the linked list
 * @h: pointer to the firts node of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h;
	while (current)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		count++;
	}
	return (count);
}
