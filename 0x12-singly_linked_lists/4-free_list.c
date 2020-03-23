#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - write a function that frees a list_t list
 * @head: head of the list
 * Return: no return value
 */
void free_list(list_t *head)
{
	list_t *pointer;

	if (head != NULL)
	{
		pointer = head;
		while (head->next != NULL)
		{
			pointer->next = head->next;
			if (head->str != NULL)
			{
				free(head->str);
			}
			free(head);
			head = pointer->next;
		}
		free(head->str);
		free(head);
	}
}

