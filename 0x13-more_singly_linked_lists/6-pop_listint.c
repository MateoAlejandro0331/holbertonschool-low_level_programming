#include "lists.h"
/**
 * pop_listint - check the code
 * @head: pointer to the pointer at the beginig
 * Return: num.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int num = 0;

	if (!head)
		return (0);
	num = aux->n;
	*head = (*head)->next;
	free(aux);
	return (num);
}