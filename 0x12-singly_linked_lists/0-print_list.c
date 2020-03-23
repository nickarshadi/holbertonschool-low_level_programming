#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - print all elements of list h
 * @h: list_t that gets printed out
 * Return: return the number of nodes of h
 * Des: Format list_t is defined in header lists.h
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
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	a++;
	if (h->str == NULL)
	{
		printf("[0] (nil\n)");
	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	return (a);
}
