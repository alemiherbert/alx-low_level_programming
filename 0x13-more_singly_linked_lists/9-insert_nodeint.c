#include "lists.h"


/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the pointer to the first node
 * @idx: where to insert the node
 * @n: the data to be stored in the node added
 * 
 * Return: a pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *_node, *aux;

	_node = malloc(sizeof(listint_t));
	if (!(_node && *head))
		return (NULL);
	_node->n = n;

	aux = *head;
	while (aux)
	{
		/* I use `i + 1` because the inserted node now takes up position i */
		if (i + 1 == idx)
		{
			_node->next = aux->next;
			aux->next = _node;
		}
		aux = aux->next;
		i++;
	}
	return (_node);
}
