#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at
 * a given position.
 * @head: head of list
 * @idx: index of the list where new node should be added
 * index starts at 0
 * @n: value of new  node
 * Return: return the adress of the new node
 * or NULL if it failed;
 * Description: If it is not possible to add the new node
 * at index ix, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *node1, *new;
	unsigned int a = 0;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
	{
		return (NULL);
	}
	new->n = n;
	node = *head;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node)
	{
		if (idx == a + 1)
		{
			node1 = node->next;
			node->next = new;
			new->next = node1;
			return (new);
		}
		node = node->next;
		a++;
	}
	free(new);
	return (NULL);
}
