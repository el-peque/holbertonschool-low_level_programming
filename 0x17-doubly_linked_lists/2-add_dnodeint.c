#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nhead;

	nhead = malloc(sizeof(**head));
	if (nhead == NULL)
	{
		return (NULL);
	}
	nhead->n = n;
	nhead->prev = nhead;
	nhead->next = (*head);
	(*head) = nhead;
	(*head)->prev = NULL;

	return (*head);
}
