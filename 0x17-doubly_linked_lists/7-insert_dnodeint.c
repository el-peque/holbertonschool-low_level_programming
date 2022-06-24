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
	dlistint_t *aux = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	for (i = 1; i < idx; i++)
	{
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	if (aux->next != NULL)
		new_node->next = aux->next;
	aux->next = new_node;
	new_node->prev = aux;

	return (new_node);
}
