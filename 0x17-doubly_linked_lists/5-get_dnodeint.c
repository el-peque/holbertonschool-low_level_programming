#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: index
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int n = 0;

	while (n < index)
	{
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
		n++;
	}
	return (aux);
}
