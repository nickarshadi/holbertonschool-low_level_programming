#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: head of list
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *node, *node1;

	node = head;
	while (node)
	{
		node1 = node;
		node = node->next;
		free(node1);
	}
}
