#include "lists.h"
/**
 * delete_dnodeint_at_index - delete note
 * @head: pointer
 * @index: index
 * Return: 1 success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int idx = 0;

	if (!*head || !head)
		return (-1);
	current = *head;
	while (idx < index)
	{
		if (!current)
			return (-1);
		current = current->next;
		idx++;
	}
	if (*head == current)
		*head = current->next;
	if (current->next)
		(current->next)->prev = current->prev;
	if (current->prev)
		(current->prev)->next = current->next;
	free(current);
	return (1);
}
