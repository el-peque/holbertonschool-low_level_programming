#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int n = 0;

	while (n < index)
	{
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
		n++;
	}
	return (aux);
}
