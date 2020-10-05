#include "hash_tables.h"

/**
 * key_index - Give the index of a key.
 * @key: const unsigned char *key
 * @size: unsigned long int size of the array of the hash table.
 * Return: Return the index at which key/value pair should be stored
 * in the array of the hash-table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
