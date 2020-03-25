#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a
 * listint_t linked list
 * @head: head of list;
 * Return: return a pointer to the first node of
 * the reversed list
 * Description: Your are not allowed to use more than 1 loop
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables
 * in your function
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *node1;

	if (!head || !*head)
	{
		return (NULL);
	}
	node = *head;
	*head = NULL;
	while (node)
	{
		node1 = node->next;
		node->next = *head;
		*head = node;
		node = node1;
	}
	return (*head);
}
