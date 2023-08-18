#include "lists.h"


/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: pointer to the first element
 * @idx: index to insert the node
 * @n: the data to store at the node
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
}
