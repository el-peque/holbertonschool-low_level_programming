#include "lists.h"

/**
 * print_listint - prints all the elements of a list_tint list
 * @h: list_tint h
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		printf("(nil)\n");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
