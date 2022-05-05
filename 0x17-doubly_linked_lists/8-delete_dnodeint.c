#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: head
 * @index: index
 * Return: 1 if it succeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(aux);
			return (1);
		}
		else
		{
			while (i < index)
			{
				if ((*head)->next == NULL)
					return (-1);
				(*head) = (*head)->next;
				i++;
			}
			aux = *head;
			*head = (*head)->next;
			free(aux);
			return (1);
		}
	}
	else
		return (-1);
}
