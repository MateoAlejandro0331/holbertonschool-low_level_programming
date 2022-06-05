#include "hash_tables.h"

/**
 * key_index - found de keyindex for the list
 * @key: key to record
 * @size: table size
 * Return: index of store the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
