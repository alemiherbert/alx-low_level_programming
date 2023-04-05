#include "lists.h"


/**
 * get_nodeint_at_index - return the nth node of a listint_t list
 * @head: pointer to the first node
 * @index: the index
 *
 * Return: pointer to the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux;

	if (!head)
		return (NULL);

	aux = head;
	while (aux)
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
	return (NULL);
}
