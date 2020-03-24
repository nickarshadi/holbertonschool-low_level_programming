#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - write a function that returns the sum of
 * all data (n) of a listint_t linked list.
 * @head: head of list
 * Return: return the sum of all nodes
 * If list is empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	node = head;
	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
