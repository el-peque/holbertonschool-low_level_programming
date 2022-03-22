#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */

int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	if ((*head) == NULL)
	{
		return(0);
	}
	(*head) = (*head)->next;
	return (n);
}
