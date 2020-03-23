#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Write a function that adds
 * a new node at the beginning of a list_t list.
 * @head: new node
 * @str: node->str string
 * Desc:
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int a = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
		{}
		new->str = strdup(str);
	}
	else
	{
		new->str = NULL;
	}
	new->len = a;
	new->next = *head;
	*head = new;
	return (new);
}
