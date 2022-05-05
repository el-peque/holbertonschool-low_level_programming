#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nend;
	dlistint_t *aux = *head;

	nend = malloc(sizeof(dlistint_t));
	if (nend == NULL)
	{
		return (NULL);
	}
	nend->n = n;
	nend->next = NULL;

	if (*head == NULL)
	{
		*head = nend;
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = nend;
	}
	return (nend);
}
