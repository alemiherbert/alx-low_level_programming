#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t object
 * @h: pointer to the first node of the list
 * 
 * Return: the number of elements printed
*/
size_t print_listint(const listint_t *h)
{
    size_t n = 0;
    if (!h)
        return (0);

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        n++;
    }
    return (n);
}