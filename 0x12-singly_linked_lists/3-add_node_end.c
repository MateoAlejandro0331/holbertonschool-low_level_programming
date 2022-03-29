#include "lists.h"
/**
 * add_node_end - add a new node at the end  of the linked list
 * @head: pointer to the head of the linked list
 * @str: string to copy
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*New node at the end of the list*/
	list_t *new_node;
	list_t *last = *head; /*pointer to traverse the list till last node*/

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;
	/*Change the next of last node */
	last->next = new_node;
	return (new_node);
}
