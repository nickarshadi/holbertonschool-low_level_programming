#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes 
 * the node at the index index of a listint_t linked list
 * @head: head of list
 * @index: index is the index of the node that should
 * be deleted. Index starts at 0.
 * Return: 1 if it suceeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node1, *node2;
	unsigned int a = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	node = *head;
	while (node)
	{
		if (0 == index)
		{
			node1= node->next;
			*head = node1;
			free(node); 
			return (1);
		}
		if (a + 1 == index)
		{
			node1 = node->next;
			node2 = node->next->next;
			node->next = node2;
			free(node1);
			return (1);
		}
		node = node->next;
		a++;
	}
	return (-1);
}
