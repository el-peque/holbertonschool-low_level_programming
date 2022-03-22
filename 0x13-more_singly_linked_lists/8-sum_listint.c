#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
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
