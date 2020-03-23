#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Write a function that prints all elements
 * of a listint_t list
 * @h: header of list which is defined in "lists.h
 * Return: the number of nodes
 * Description:
 * Format: see example
 * You are allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	int a = 0;

	node = h;
	while (node->next != NULL)
	{
		printf("%d\n", node->n);
		a++;
		node = node->next;
	}
	printf("%d\n", node->n);
	return (a);
}
