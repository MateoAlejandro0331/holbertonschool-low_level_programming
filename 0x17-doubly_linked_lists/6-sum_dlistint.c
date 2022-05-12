#include "lists.h"
/**
 * sum_dlistint - sum all data of the list
 * @head: pointer to the list
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
