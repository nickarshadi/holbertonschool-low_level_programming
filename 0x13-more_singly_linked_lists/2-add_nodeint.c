#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of
 * a listint_t list
 * @head: head of list
 * @n: list->n
 * Return: Return adress of the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
