#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - write a function that returns
 * the nth node of a listint_t linked list.
 * @head: head of list
 * @index: index is the index of the node, starting at 0
 * Return: return node with index index
 * Description: if the node doesn't exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int a = 0;

	if (!head)
	{
		return (NULL);
	}
	node = head;
	while (node)
	{
		if (a == index)
		{
			return (node);
		}
		node = node->next;
		a++;
	}
	return (NULL);
}
