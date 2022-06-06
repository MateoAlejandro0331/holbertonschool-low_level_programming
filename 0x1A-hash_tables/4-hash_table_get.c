#include "hash_tables.h"

/**
 * hash_table_get - get a value in the hash table
 * @ht: the hash table
 * @key: key word to found
 * Return: Hash table value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_node_t *aux = NULL;
	unsigned long int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
