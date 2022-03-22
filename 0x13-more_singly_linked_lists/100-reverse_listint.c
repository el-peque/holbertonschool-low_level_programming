#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: head
 * @index: index
 * Return: 1 if it succeded, -1 if it failed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t aux;
	listint_t *aux2 = *head;

	aux.next = NULL;
	while ((*head)->next != NULL)
	{
		aux.n = (*head)->n;
		(*head)->next = aux;
	}
	return (*head);
}
