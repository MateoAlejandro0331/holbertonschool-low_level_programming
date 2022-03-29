#include "lists.h"
/**
 * free_list - free the memory in the heap for de linked list
 * @head: pointer to the firts node of the list
 * Return: Nothing
 * its necesary to free all the arrays inside the list
 */
void free_list(list_t *head)
{
	list_t *aux;
	
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
