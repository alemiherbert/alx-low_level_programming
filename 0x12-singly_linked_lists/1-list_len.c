#include "lists.h"

/**
 * list_len - find the a singly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
