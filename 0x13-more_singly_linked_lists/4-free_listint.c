#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the first node
*/
void free_listint(listint_t *head)
{
	listint_t *aux;

	while ((aux = head))
	{
		head = head->next;
		free(aux);
	}
}
