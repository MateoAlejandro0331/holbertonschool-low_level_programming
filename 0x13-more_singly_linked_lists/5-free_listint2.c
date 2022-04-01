#include "lists.h"
/**
 * free_listint2 - check the code
 *  @head: pointer to the firts node
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *aux_free;

	while (aux)
	{
		aux_free = aux;
		aux = aux->next;
		free(aux_free);
	}
}
