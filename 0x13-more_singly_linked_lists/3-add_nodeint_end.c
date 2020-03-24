#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end
 * of a listint_t list
 * @head: head of list
 * @n: value of new node
 * Return: the adress of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = new;
	}
	return (new);
}
