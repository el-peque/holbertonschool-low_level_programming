#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at index of a dlistint_t list
 * @h: head
 * @idx: index
 * @n: n
 * Return: new end
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *nend;
	dlistint_t *aux = *h;

	nend = malloc(sizeof(dlistint_t));
	if (nend == NULL)
	{
		return (NULL);
	}
	nend->n = n;
	nend->next = NULL;

	for (i = 0; i != idx; i++)
	{
		if (aux->next != NULL)
			return (NULL);
		aux = aux->next;
	}
	aux->next = nend;
	nend->prev = aux;

	return (nend);
}
