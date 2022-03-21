#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head
 * @n: n
 * Return: new end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend;
	listint_t *aux = *head;

	nend = malloc(sizeof(listint_t));
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
