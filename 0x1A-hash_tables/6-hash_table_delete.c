#include "hash_tables.h"

/**
 * hash_table_delete - delete(free) a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
