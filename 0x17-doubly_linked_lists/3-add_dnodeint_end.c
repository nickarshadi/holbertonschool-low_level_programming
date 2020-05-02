#include "lists.h"

/**
  * add_dnodeint_end - add node at the end
  * @head: head
  * @n: value
  * Return: the adress of the new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *node2 = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!head || !new)
		return (NULL);
	node = *head;
	new->n = n;
	new->next = NULL;
	node = *head;
	while (node)
	{
		node2 = node;
		node = node->next;
	}
	if (node2)
	{
		node2->next = new;
		new->prev = node2;
	} else
		new->prev = NULL;
	if (!*head)
		*head = new;
	return (new);
}
