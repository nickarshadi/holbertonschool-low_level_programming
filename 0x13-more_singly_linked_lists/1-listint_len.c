#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Return the number of elements in a
 * linked listint_t list
 * @h: header of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	int a = 1;

	node = h;
	while (node->next != NULL)
	{
		a++;
		node = node->next;
	}
	return (a);
}