#include "lists.h"
/**
 * free_list - free the memory in the heap for de linked list
 * @head: pointer to the firts node of the list
 * Return: Nothing
 * its necesary to free all the arrays inside the list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
