#include "hash_tables.h"

/**
 * hash_table_print - print all the Table
 * @ht: pointer to the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned long int i = 0;

	printf("{");
	for (; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			printf("'%s': ", aux->key);
			printf("'%s', ", aux->value);
			if (aux->next == NULL)
			{
				printf("'%s' : ", aux->key);
				printf("'%s'", aux->value);
				break;
			}
			aux = aux->next;
		}
	}
	printf("}\n");
}
