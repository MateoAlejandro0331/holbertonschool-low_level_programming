#include "lists.h"
/**
 * get_dnodeint_at_index - return the node index
 * @head: pointer to the list
 * @index: index to find
 * Return: the node and if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int idx = 0;

	while (current)
	{
		if (idx == index)
			return (current);
		current = current->next;
		idx++;
	}
	return (NULL);
}
