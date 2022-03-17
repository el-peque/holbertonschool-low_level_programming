#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: str
 * Return: new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nhead;

	nhead = malloc(sizeof(**head));
	if (nhead == NULL)
	{
		return (NULL);
	}
	nhead->str = strdup(str);
	nhead->len = strlen(str);
	nhead->next = (*head);
	(*head) = nhead;

	return (nhead);
}
