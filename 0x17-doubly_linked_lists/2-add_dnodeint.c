#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nhead, *aux;

	nhead = malloc(sizeof(**head));
	if (nhead == NULL)
	{
		return (NULL);
	}
	aux = malloc(sizeof(**head));
	nhead->n = n;
	nhead->next = (*head);
	nhead->prev = nhead;
	aux = nhead;
	aux->prev = NULL;
	(*head) = aux;

	return (*head);
}
