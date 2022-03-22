#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: n
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *nnode;
	unsigned int i = 0;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	if (aux == NULL)
		return (NULL);
	if (idx < 0)
		return (NULL);
	if (idx == 0)
	{
		nnode->n = n;
		nnode->next = (*head);
		(*head) = nnode;
		return (nnode);
	}


	while (i < idx - 1)
	{
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
		i++;
	}
	nnode->n = n;
	nnode->next = aux->next;
	aux->next = nnode;

	return (nnode);
}
