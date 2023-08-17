#include "lists.h"


/**
 * add_dnodeint_end - add a node to the end of a doubly linked list
 * @head: pointer to the first node
 * @n: number to store in the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *tmp;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    for (tmp = *head; tmp->next; tmp = tmp->next)
        ;
    tmp->next = new_node;
    new_node->prev = tmp;
    return (new_node);
}
