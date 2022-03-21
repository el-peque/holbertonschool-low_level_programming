#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nhead;

	nhead = malloc(sizeof(head));
	if (head == NULL)
	{
		return (NULL);
	}
	nhead->n = n;
	nhead->next = *head;
	*head = nhead;

	return (nhead);
}
