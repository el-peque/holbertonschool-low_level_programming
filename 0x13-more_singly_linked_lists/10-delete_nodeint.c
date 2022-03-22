#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: head
 * @index: index
 * Return: 1 if it succeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	unsigned int i = 0;

	if (head != NULL)
	{
	while (i < index - 1)
	{
		if ((*head)->next == NULL)
			return (-1);

		i++;
	}
	aux = (*head)->next;
	free(*head);
	(*head) = aux;
	return (1);
	}
	return (-1);
}
