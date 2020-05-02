#include "lists.h"

/**
  * dlistint_len - return the number of elements inside a linked list
  * @h: head
  * Return: amount of nodes
  */
	size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *node = h;

	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
