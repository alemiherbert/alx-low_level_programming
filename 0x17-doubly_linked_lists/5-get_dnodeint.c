#include "lists.h"


/**
 * get_dnodeint_at_index - get the nth node of a dlistint list
 * @head: pointer to the first node,
 * @index: position of desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;

    if (!head)
        return (NULL);

    if (index == 0)
        return (head);

    for (i = 0; i < index; i++)
    {
        if (!head->next)
            return (NULL);
        head = head->next
    }
    return (head);
}
