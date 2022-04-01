#include "lists.h"
/**
* print_listnit - program to list the content of a linked list
* @h: pointer to the firts node of the list
* Return: the count of nodes
 */
size_t print_listint(const listint_t *h)
{
		int count;

		for (count = 0; h; count++)
		{
			printf("%d\n", h->n);
			h = h->next;  
		}
		return (count);
}
