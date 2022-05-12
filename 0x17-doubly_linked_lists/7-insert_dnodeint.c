#include "lists.h"
/**
 * len_list - return the number of elements of a linked list
 * @h: poiinter to the first node in the list
 * Return: number of elements
 *
 */
unsigned int len_list(dlistint_t *h)
{
	dlistint_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - add node at some index
 * @h: pointer to the head:
 * @idx: index
 * @n: new data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;
	unsigned int index = 0, len = 0;

	if (!h)
		return (NULL);
	current = *h;
	len = len_list(current);
	/**printf("%d", len);*/
	if (idx == len)
		return (add_dnodeint_end(h, n));
	while (current)
	{
		if (idx == index)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			if (index == 0)
			{
				current->prev = new;
				(*h) = new;
				return (new);
			}
			else
			{
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
