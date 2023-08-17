#include "lists.h"

/**
 * print_dlistint - print all the elements in a dlistint
 * @h: pointer to the list
 * Return: the number of nodes */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}
	return (num);
}