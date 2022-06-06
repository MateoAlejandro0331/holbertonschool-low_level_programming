#include "hash_tables.h"

/**
 * free_recursion - free the whole hash table
 * @aux: pointer to the hash table
 * Return: Nothing
 */

void free_recursion(hash_node_t *aux)
{
	if (aux == NULL)
		return;
	free_recursion(aux->next);
	free(aux->key);
	free(aux->value);
	free(aux);
}
/**
 * hash_table_delete - delete the whole hash table
 * @ht: pointer to the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
			free_recursion(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
