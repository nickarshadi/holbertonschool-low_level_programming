#include "lists.h"

/**
  * delete_dnodeint_at_index - delete node at index of a dlinked list
  * @head: head
  * @index: index
  * Return: return 1 fi it succeeded -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL, *nodeprev = NULL, *nodenext = NULL;
	unsigned int i = 0;

	if (!head)
		return (-1);
	node = *head;
	while (node)
	{
		if (i == index)
		{
			nodeprev = node->prev;
			nodenext = node->next;
			if (nodeprev && nodenext)
			{
				nodeprev->next = nodenext;
				nodenext->prev = nodeprev;
			}
			if (!nodeprev || !nodenext)
			{
				if (nodeprev)
					nodeprev->next = NULL;
				else if (nodenext)
				{
					nodenext->prev = NULL;
					*head = nodenext;
				} else
					*head = NULL;
			}
			free(node);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
