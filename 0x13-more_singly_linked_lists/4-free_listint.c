#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t *aux;

    while (head)
    {
        aux = head;
        head = head->next;
        free(aux);
    }
}