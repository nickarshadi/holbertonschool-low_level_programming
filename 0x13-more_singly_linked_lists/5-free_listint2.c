#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: doublepointer head of list
 * Description: The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *node1;

	if (head)
	{
		node = *head;
		while (node)
		{
			node1 = node;
			node = node->next;
			free(node1);
		}
		*head = NULL;
	}
}
