#include "lists.h"

/**
 * dlistint_len - print all the elements in a dlistint
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; h = h->next)
		num++;
	return (num);
}
