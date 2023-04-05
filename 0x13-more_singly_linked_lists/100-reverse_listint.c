#include "lists.h"


/**
 * reverse_listint - reverse a listint_t list
 * @head: the pointer to the pointer to the first node
 *
 * Return: a pointer to the new first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
