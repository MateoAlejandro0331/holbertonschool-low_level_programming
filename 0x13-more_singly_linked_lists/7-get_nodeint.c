#include "lists.h"
/**
 * get_nodeint_at_index - get a node from the list
 * @head: pointer to the beginig of the list
 * @index: index to the node to find
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 1; count <= index; count++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
