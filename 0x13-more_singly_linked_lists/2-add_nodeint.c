#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of a listint_t list
 * @head: pointer to a pointer to the first node
 * @n: the data to be stored in the node added
 *
 * Return: a pointer to the pointer to the first node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node;

	_node = malloc(sizeof(listint_t));
	if (!_node)
	{
		return (NULL);
	}

	/* Set the data value */
	_node->n = n;

	_node->next = *head;
	*head = _node;
	return (*head);
}
