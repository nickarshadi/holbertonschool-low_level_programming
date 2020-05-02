#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a new node at a given index
  * @h: head
  * @idx: index
  * @n: value
  * Return: new added node or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL, *node2 = NULL, *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (new ? free(new), NULL : NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	node = *h;
	while (node)
	{
	node2 = node->prev;
		if (i == idx)
		{
			new->next = node;
			new->prev = node2;
			node->prev = new;
			if (node2)
				node2->next = new;
			return (new);
		}
		i += 1;
		node = node->next;
	}
	if (i == idx)
	{
		node2->next = new;
		new->prev = node2;
		return (new);
	}
	return (NULL);
}
