#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int n = (*head)->n;

	if (head != NULL)
	{
	if (aux == NULL)
	{
		return (0);
	}
	(*head) = (*head)->next;
	free(aux);
	return (n);
	}
	return (0);
}
