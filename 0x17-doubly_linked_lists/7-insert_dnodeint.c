#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at some index
 * @h: pointer to the head:
 * @idx: index
 * @n: new data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = NULL;
	unsigned int index = 0;

	if (!*h)
		return (NULL);
	while (current)
	{
		if (index == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			if (index == 0)
			{
				new->n = n;
				new->next = current;
				new->prev = current->prev;
				current->prev = new;
				(*h) = new;
			}
			else
			{
				new->n = n;
				new->next = current;
				new->prev = current->prev;
				(current->prev)->next = new;
				current->prev = new;
			}
			return (new);
		}
		current = current->next;
		index++;
	}
	return (NULL);
}
