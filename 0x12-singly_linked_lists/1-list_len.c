#include "lists.h"

/**
 *
 *
 */

size_t list_len(const list_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (a);
	}

	while (h->next != NULL)
	{
		a++;
		h = h->next;
	}
	a++;
	return (a);
}
