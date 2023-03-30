#include "lists.h"

/**
 * print_list - print all the elements of a singly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
		h = h->next;
		i++;
	}
	/* Print the last node */
	printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
	return (i);
}
