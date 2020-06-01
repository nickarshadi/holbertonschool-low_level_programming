#ifndef _HASH_TABLES_H
#define _HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * struct hash_node_s - Node of a has table
  *
  * @key: string, the key
  * The key is unique
  * @value: The value pointed to by key
  * @next: A pinter to the next node of the list
  */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
