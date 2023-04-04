#include "lists.h"

/**
 * listint_len - get the length of a listint_t list
 * @h: pointer to the first node of the list
 *
 * Return: the number of elements of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
