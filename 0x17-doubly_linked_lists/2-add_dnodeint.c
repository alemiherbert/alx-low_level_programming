#include "lists.h"

/**
 * add_dnodeint - add a node to a doubly linked list
 * @head: pointer to the first node
 * @n: data to store in the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;
	new_node->next->prev = new_node;
	
	return (new_node);
}
