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
	dlistint_t *new_node;
	dlistint_t *aux;

	if (h == NULL)
		return (NULL);

	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(aux))
		return (add_dnodeint_end(h, n));

	if (idx > dlistint_len(*h))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = aux;

	for (i = 0; i < idx - 1; i++)
	{
		aux = aux->next;
	}

	if (aux->next == NULL)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}

	new_node->next = aux->next;
	aux->next->prev = new_node;
	aux->next = new_node;

	return (new_node);
}

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: dlist_tint h
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
