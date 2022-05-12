#include "lists.h"
/**
 * add_dnodeint_end - Add node at the and of the list
 * @head: pointer to the head of the list
 * @n: data to introduce
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return ((*head));
}
