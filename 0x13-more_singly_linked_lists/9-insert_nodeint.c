#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *aux1 = *head;
    listint_t *aux2 = *head;
    unsigned int count;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);
    for (count = 1; count < idx; count++)
    {
        aux1 = aux1->next;
        if (!aux1)
            return (NULL);
    }
    for (count = 1; count < (idx + 1); count++)
    {
        aux2 = aux2->next;
        if (!aux2)
            return (NULL);
    }
    new_node->n = n;
    aux1->next = new_node;
    new_node->next = aux2;
    return (new_node);
}