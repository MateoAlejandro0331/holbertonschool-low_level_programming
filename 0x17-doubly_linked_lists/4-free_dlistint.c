#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
