#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head
 * node of a listint_t list, and returns the head node's
 * data (n).
 * @head: head of list
 * Return: return n of the head node
 * Description: If the linked list is empy return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node, *node1;
	int a;

	if (!head || !*head)
	{
		return (0);
	}
	node = *head;
	node1 = node->next;
	a = node->n;
	free(node);
	*head = node1;
	return (a);
}
