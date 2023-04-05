#include "lists.h"

/**
 * sum_listint - get the sum of all the data of a listint_t list
 * @head: the first node of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
