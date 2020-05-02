#include "lists.h"

/**
 * sum_dlistint - return the sum of all data
 * @head: head
 * Return: sum of all node values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
