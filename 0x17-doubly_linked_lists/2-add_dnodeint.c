#include "lists.h"

/**
  * add_dnodeint - add new node at the beginning of the list
  * @head: head
  * @n: value n
  * Return: Address of the new element, NULL if it fails`
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
