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

	current = malloc(sizeof(list_t));
	current = h;

	while (current->next != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			printf("[%d] %s\n", current->next->len, current->next->str);
			count++;
		}
		else if (current->next->str == NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			printf("[%d] %s\n", current->next->len, current->next->str);
			count++;
		}
		current = current->next;
		count++;
	}
	return (count);
}
