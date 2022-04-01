#include "lists.h"
/**
 * sum_listint - sum the n value of the all list
 * @head: pointer to the firt node
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
