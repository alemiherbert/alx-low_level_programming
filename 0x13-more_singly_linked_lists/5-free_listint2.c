#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: a pointer to a pointer to the first node
 * Description: this function sets head the to NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *aux, *aux2;

	/* let's try to avoid moving the head pointer */
	aux2 = *head;
	while ((aux = aux2))
	{
		aux2 = aux2->next;
		free(aux);
	}
	*head = NULL;
}
