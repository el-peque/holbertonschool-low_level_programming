#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int n = (*head)->n;

	if (aux == NULL)
	{
		return(0);
	}
	(*head) = (*head)->next;
	free(aux);
	return (n);
}
