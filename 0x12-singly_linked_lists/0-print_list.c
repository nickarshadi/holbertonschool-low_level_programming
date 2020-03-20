#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - print all elements of a list_t list
 * list parameter that should be printed
 * Return: amount of nodes
 * if str == NULL print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		a++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	a++;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (a);
	}
	printf("[%d] @s\n", h->len, h->str);
	return (a);
}