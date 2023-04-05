#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index
 * @head: pointer to pointer to linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *aux, *tmp;

    if (!*head)
        return (-1);

    aux = *head;
    if (index == 0)
    {
        *head = (*head)->next;
        free(aux);
        return (1);
    }
    while (aux)
    {
        if (i == index - 1)
        {
            tmp = aux->next;
            if (aux->next)
                aux->next = tmp->next;
            else
                aux->next = NULL;
            free(tmp);
        };
        aux = aux->next;
        i++;
    }
    return (1);
}