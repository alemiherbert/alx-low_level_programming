#include "lists.h"

/**
 * sum_dlistint - sum the elements in a dlistint
 * @h: pointer to the list
 * Return: the number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
    int sum;

    for (sum = 0; head != NULL; head = head->next)
        sum += head->n;
    return (num);
}
