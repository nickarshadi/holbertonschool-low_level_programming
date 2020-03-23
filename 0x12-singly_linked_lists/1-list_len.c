#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return length of list
 * @h: liste head
 * Return: length of list
 * Desc: Write a function that returns the number of elements
 * in a linked list_t list
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
