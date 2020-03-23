#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node
 * at the end of a list_t list
 * @head: head of list_t
 * @str: string of new node
 * Return: Return the adress of the new element,
 * or NULL if it failed
 * Desc: str needs to be duplicated
 * Your are allowed to use strdup
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *pointer;
	int a;

	pointer = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (pointer == NULL)
	{
		*head = new;
	}
	else
	{
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = new;
	}
	if (str == NULL)
	{
		new->len = 0;
		new->str = NULL;
	}
	else
	{
		for (a = 0; str[a] != '\0'; a++)
		{}
		new->len = a;
		new->str = strdup(str);
	}
	new->next = NULL;
	return (new);
}
