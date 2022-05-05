#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t link list
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0, n = 0;

	if (aux == NULL)
		return (0);
	while (aux->next != NULL)
	{
		sum += aux->n;
		aux = aux->next;
		n++;
	}
	sum += aux->n;
	return (sum);
}
