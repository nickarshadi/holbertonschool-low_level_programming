#include "lists.h"

/**
  * free_dlistint - free a double linked list
  * @head: head
  * Return: None
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		head = node;
		free(head);
		node = node->next;
	}
}
