#include "lists.h"

/**
 * add_node - add a new node at the start  of the linked list
 * @head: pointer to the head of the linked list
 * @str: string to copy
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	/*Allocate new node*/
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	/*Copy the string to the new node*/
	new_node->str = strdup(str);
	/*Copy the len of the string*/
	new_node->len = strlen(str);
	/* 3. Make next of new node as head */
	new_node->next = (*head);
	/* 4. move the head to point to the new node */
	(*head) = new_node;
	return (*head);
}
