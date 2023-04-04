#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: pointer to the pointer the first node
 * @n: the data to be stored in the node
 *
 * Return: a pointer to the pointer to the first node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* aux is a pointer I use for moving to the tail of the list*/
	listint_t *_node, *aux;

	_node = malloc(sizeof(listint_t));
	if (!_node)
	{
		return (NULL);
	}
	_node->n = n;

	if (*head)
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = _node;
	}
	else
	{
		*head = _node;
	}
	return (*head);
}
