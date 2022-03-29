#include "lists.h"
/**
 * print_list - print the content of the linked list
 * @h: pointer to the firts node of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			printf("[%d] %s\n", h->next->len, h->next->str);
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			printf("[%d] %s\n", h->next->len, h->next->str);
			count++;
		}
		h = h->next;
		count++;
	}
	return (count);
}
