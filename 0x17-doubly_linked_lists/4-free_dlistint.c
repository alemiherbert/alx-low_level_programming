#include "lists.h"


/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the first element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
