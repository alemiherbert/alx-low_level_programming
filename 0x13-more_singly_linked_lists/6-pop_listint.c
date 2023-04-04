#include "lists.h"


/**
 * pop_listint - delete the head node of a listint_t list
 * @head: pointer to the pointer to the first node
 *
 * Return: the node's data
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *_node;

	if (!*head)
		return (0);

	data = (*head)->n;
	_node = (*head)->next;
	free(*head);
	*head = _node;
	return (data);
}
