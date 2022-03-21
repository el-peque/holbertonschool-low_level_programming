#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	while ((*head)->next != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	free(*head);
}
