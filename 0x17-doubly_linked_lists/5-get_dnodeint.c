#include "lists.h"

/**
  * get_dnodeint_at_index - get node at index
  * @head: head
  * @index: index starting from 0
  * Return: Node at index index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			break;
		node = node->next;
		i += 1;
	}
	return (node);
}
