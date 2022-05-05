#include "lists.h"

/**
 * print_listint - prints all the elements of a list_tint list
 * @h: list_tint h
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
