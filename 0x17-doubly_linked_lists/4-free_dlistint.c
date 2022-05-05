#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head
 */

void free_dlistint(dlistint_t **head)
{
	dlistint_t *aux;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
		}
		free(*head);
		(*head) = NULL;
	}
}
